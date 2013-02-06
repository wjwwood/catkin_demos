cmake_minimum_required(VERSION 2.8.3)
project(foo)

find_package(catkin REQUIRED COMPONENTS foo_msgs)

catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(foo_node src/foo_node.cpp)
add_dependencies(foo_node foo_msgs_gencpp)

