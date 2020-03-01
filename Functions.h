//
// Created by Win10Pro on 14.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__FUNCTIONS_H
#define LAB_2_STACK_REALIZATION__FUNCTIONS_H

#include "Stack structures/Vector_stack.h"
#include "Stack structures/Array_stack.h"
#include "Stack structures/List_stack.h"

class Functions {

private:

public:

    //Functions for stacks

    Vector_stack <Point> create_new_vector_stack();
    Array_stack <Point> create_new_array_stack(bool benchmark);
    List_stack <Point> create_new_list_stack();
    void vector_stack_interactive(Vector_stack <Point> vectorStack);
    void array_stack_interactive(Array_stack <Point> arrayStack);
    void list_stack_interactive(List_stack <Point> listStack);
    void vector_stack_demo(Vector_stack <Point> vectorStack, double x_cor_1, double y_cor_1, double z_cor_1,
                           double x_cor_2, double y_cor_2, double z_cor_2);
    void array_stack_demo(Array_stack <Point> arrayStack, double x_cor_1, double y_cor_1, double z_cor_1,
                           double x_cor_2, double y_cor_2, double z_cor_2);
    void list_stack_demo(List_stack <Point> listStack, double x_cor_1, double y_cor_1, double z_cor_1,
                          double x_cor_2, double y_cor_2, double z_cor_2);
    void comparison_benchmark(Vector_stack <Point> vectorStack, Array_stack <Point> arrayStack, List_stack <Point> listStack);


};


#endif //LAB_2_STACK_REALIZATION__FUNCTIONS_H
