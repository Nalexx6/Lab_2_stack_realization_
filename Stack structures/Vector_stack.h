//
// Created by Win10Pro on 14.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__VECTOR_STACK_H
#define LAB_2_STACK_REALIZATION__VECTOR_STACK_H


#include "Point.h"

class Vector_stack {
private:

public:
    //Body of stack

    std::vector <Point> stack_real = {};
    //bool printing;

    //Functions

    Vector_stack () = default;

    void vector_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1, bool printing);
    void vector_push(const Point& point_1, bool printing);
    void vector_pop(bool printing);
    Point vector_peek();
    bool vector_is_empty();

};


#endif //LAB_2_STACK_REALIZATION__VECTOR_STACK_H
