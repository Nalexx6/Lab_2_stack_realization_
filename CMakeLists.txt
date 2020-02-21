cmake_minimum_required(VERSION 3.15)
project(Lab_2_stack_realization_)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab_2_stack_realization_ main.cpp
        "Stack structures/Point.cpp"        "Stack structures/Point.h"
        "Stack structures/List_stack.cpp" "Stack structures/List_stack.h"
        "Stack structures/ListNode.cpp" "Stack structures/ListNode.h"
        Functions.cpp Functions.h
        "Stack structures/Vector_stack.cpp" "Stack structures/Vector_stack.h"
        "Stack structures/Array_stack.cpp" "Stack structures/Array_stack.h"
        Mode.cpp Mode.h)