cmake_minimum_required (VERSION 3.4)
project (Composition CXX)
 
#set(SeqAn3_DIR "${CMAKE_SOURCE_DIR}/../seqan3/build_system")
#find_package (SeqAn3 REQUIRED)
 
add_executable (CompositionEmployee main.cpp CommissionEmployee.cpp BasePlusCommissionEmployee.cpp)
 
target_link_libraries (CompositionEmployee)
