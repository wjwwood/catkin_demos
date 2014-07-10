cmake_minimum_required(VERSION 2.8.3)
project(package_using_data)

find_package(catkin REQUIRED COMPONENTS package_with_data)

catkin_package()

message("package_with_data_DATA_DIR: ${package_with_data_DATA_DIR}")

file(READ "${package_with_data_DATA_DIR}/test.dat" test_dat_raw)

message("Contents of ${package_with_data_DATA_DIR}/test.dat:")
message("${test_dat_raw}")
