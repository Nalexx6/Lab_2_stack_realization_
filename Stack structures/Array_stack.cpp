//
// Created by Win10Pro on 14.02.2020.
//

#include "Array_stack.h"

Array_stack::Array_stack() {

    Size = 0;
    this->stack_real = new Point[N];

}

Array_stack::~Array_stack() {

    delete[] stack_real;

}

void Array_stack::array_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1, bool printing) {



    array_push(Point(x_cor_1, y_cor_1, z_cor_1), printing);

}

void Array_stack::array_push(const Point& point_1, bool printing) {

    if(Size != N) {
        stack_real[N - 1 - Size] = point_1;
        Size++;
        if(printing)
            std::cout<<"Point was successfully pushed\n";
    } else{
        std::cout<<"Stack is full, can`t push the element\n";
    }

}

void Array_stack::array_pop(bool printing) {

    if (!array_is_empty()) {
        //stack_real[100 - Size] = Point();
        Size--;
        if(printing)
            std::cout<<"Top element was successfully poped"<<std::endl;
    } else
        std::cout<<"Stack was empty, nothing to pop\n";
}

Point Array_stack::array_peek() {

    return stack_real[N - Size];

}

bool Array_stack::array_is_empty() {

    return Size == 0;

}
