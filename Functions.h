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

    Vector_stack create_new_vector_stack();
    Array_stack create_new_array_stack();
    List_stack create_new_list_stack();
    void vector_stack_interactive(Vector_stack vectorStack);
    void array_stack_interactive(Array_stack arrayStack);
    void list_stack_interactive(List_stack listStack);
    void vector_stack_demo(Vector_stack vectorStack, double x_cor_1, double y_cor_1, double z_cor_1,
                           double x_cor_2, double y_cor_2, double z_cor_2);
    void array_stack_demo(Array_stack arrayStack, double x_cor_1, double y_cor_1, double z_cor_1,
                           double x_cor_2, double y_cor_2, double z_cor_2);
    void list_stack_demo(List_stack listStack, double x_cor_1, double y_cor_1, double z_cor_1,
                          double x_cor_2, double y_cor_2, double z_cor_2);
    void vector_stack_benchmark(Vector_stack vectorStack);
    void array_stack_benchmark(Array_stack arrayStack);
    void list_stack_benchmark(List_stack listStack);



};


#endif //LAB_2_STACK_REALIZATION__FUNCTIONS_H
