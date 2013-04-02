cmake_minimum_required(VERSION 2.8.3)
project(test_with_data)

find_package(catkin REQUIRED)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES add
)

include_directories(include)

## Declare a cpp library
add_library(add src/${PROJECT_NAME}/add.cpp)

## Mark executables and/or libraries for installation
install(TARGETS add
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

## Mark cpp header files for installation
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
  PATTERN ".svn" EXCLUDE
)

## Add gtest based cpp test target and link libraries
get_filename_component(TEST_WITH_DATA_TEST_DIR "test/data" ABSOLUTE)
configure_file(test/test_with_data_settings.h.in test/test_with_data_settings.h)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/test)
catkin_add_gtest(${PROJECT_NAME}-test test/test_with_data.cpp)
if(TARGET ${PROJECT_NAME}-test)
  target_link_libraries(${PROJECT_NAME}-test add)
endif()

## This is an alternative method
## Add gtest based cpp test target and link libraries
catkin_add_gtest(${PROJECT_NAME}2-test test/test_with_data2.cpp WORKING_DIRECTORY test)
if(TARGET ${PROJECT_NAME}2-test)
  target_link_libraries(${PROJECT_NAME}2-test add)
endif()
