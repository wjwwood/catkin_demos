#include <iostream>

#include <foo_msgs/Foo.h>

int main(void) {
    foo_msgs::Foo msg;
  msg.bar = 4;
  std::cout << msg << std::endl;
}
