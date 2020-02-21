//
// Created by Win10Pro on 14.02.2020.
//

#include "Vector_stack.h"


void Vector_stack::vector_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1, bool printing) {


    //;
    vector_push(Point(x_cor_1, y_cor_1, z_cor_1), printing);


}


void Vector_stack::vector_push(const Point& point_1, bool printing) {

    stack_real.emplace_back(point_1);
    if(printing)
        std::cout<<"Point was successfully pushed to stack\n";

}

void Vector_stack::vector_pop(bool printing) {

    //Delete top element from vector_stack

    if(!vector_is_empty()) {
        stack_real.pop_back();
        if(printing)
            std::cout<<"Top element was successfully poped"<<std::endl;

    } else
        std::cout<<"Stack is empty, nothing to pop"<<std::endl;

}

Point Vector_stack::vector_peek() {

    return stack_real[0];

}

bool Vector_stack::vector_is_empty() {

    return stack_real.empty();

}




