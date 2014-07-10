cmake_minimum_required(VERSION 2.8.3)
project(package_with_data)

find_package(catkin REQUIRED)

catkin_package(CFG_EXTRAS package_with_data-extras.cmake)

install(DIRECTORY data
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
