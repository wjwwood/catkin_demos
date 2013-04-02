#include <fstream>
#include <string.h>

#include "gtest/gtest.h"

#include "test_with_data/add.h"

#include "test_with_data_settings.h"

namespace {

class SomeTests : public ::testing::Test {};

TEST_F(SomeTests, test_add) {
  std::fstream in;
  in.open((std::string(TEST_DIR) + std::string("/test.dat")).c_str(), std::fstream::in);
  int op1, op2, expected;
  while (in >> op1 >> op2 >> expected) {
    EXPECT_EQ(expected, test_with_data::add(op1, op2));
  }
  in.close();
}

}

int main(int argc, char **argv) {
  try {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
  } catch (std::exception &e) {
    std::cerr << "Unhandled Exception: " << e.what() << std::endl;
  }
  return 1;
}
