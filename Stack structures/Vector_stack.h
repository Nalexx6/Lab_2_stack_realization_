//
// Created by Win10Pro on 14.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__VECTOR_STACK_H
#define LAB_2_STACK_REALIZATION__VECTOR_STACK_H


#include "Point.h"

template <typename T>
class Vector_stack {
private:

public:
    //Body of stack

    std::vector <T> stack_real = {};

    //Functions

    Vector_stack () = default;

    void vector_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1, bool printing){

        vector_push(Point(x_cor_1, y_cor_1, z_cor_1), printing);

    }
    void vector_push(const T& t, bool printing){

        stack_real.emplace_back(t);
        if(printing)
            std::cout<<"Point was successfully pushed to stack\n";

    }
    void vector_pop(bool printing){

        //Delete top element from vector_stack

        if(!vector_is_empty()) {
            stack_real.pop_back();
            if(printing)
                std::cout<<"Top element was successfully popped"<<std::endl;

        } else
            std::cout<<"Stack is empty, nothing to pop"<<std::endl;

    }
    T vector_peek(){

        return stack_real[0];

    }
    bool vector_is_empty(){

        return stack_real.empty();

    }
    int size_of_container(){

    return (sizeof(stack_real[0])*stack_real.size()+sizeof(Vector_stack));

    }

};


#endif //LAB_2_STACK_REALIZATION__VECTOR_STACK_H
