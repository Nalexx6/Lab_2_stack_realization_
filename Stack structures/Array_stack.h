//
// Created by Win10Pro on 14.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__ARRAY_STACK_H
#define LAB_2_STACK_REALIZATION__ARRAY_STACK_H

#include "Point.h"

class Array_stack {
private:

public:

    //Body of stack

    unsigned int Size;
    int N = 10000000;
    Point *stack_real;
    //bool printing;

    //Functions

    Array_stack();
    ~Array_stack();

    void array_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1, bool printing);
    void array_push(const Point& point_1, bool printing);
    void array_pop(bool printing);
    Point array_peek();
    bool array_is_empty();
};


#endif //LAB_2_STACK_REALIZATION__ARRAY_STACK_H
