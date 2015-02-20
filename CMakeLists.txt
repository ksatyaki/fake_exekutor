cmake_minimum_required(VERSION 2.8.3)
project(fake_exekutor)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  action_exekutor
  roscpp
)

catkin_package()

include_directories(include)
include_directories(
  ${catkin_INCLUDE_DIRS}
)

## Declare a cpp executable
add_library(fake_exekutor src/fake_exekutor.cpp)

add_executable(fake_elevator src/fake_elevator.cpp)
add_executable(fake_doro src/fake_doro.cpp)
add_executable(fake_coro src/fake_coro.cpp)
add_executable(fake_dustcart src/fake_dustcart.cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(fake_exekutor
  ${catkin_LIBRARIES}
)

target_link_libraries(fake_coro
  ${catkin_LIBRARIES}
  fake_exekutor
  peiskernel_mt
)

target_link_libraries(fake_elevator
  ${catkin_LIBRARIES}
  fake_exekutor
  peiskernel_mt
)

target_link_libraries(fake_doro
  ${catkin_LIBRARIES}
  fake_exekutor
  peiskernel_mt
)

target_link_libraries (fake_dustcart
	${catkin_LIBRARIES}
	fake_exekutor
	peiskernel_mt
)

