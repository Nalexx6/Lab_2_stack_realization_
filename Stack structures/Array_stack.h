//
// Created by Win10Pro on 14.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__ARRAY_STACK_H
#define LAB_2_STACK_REALIZATION__ARRAY_STACK_H

#include "Point.h"

template <typename T>
class Array_stack {
private:

public:

    //Body of stack

    int Size;
    int N;
    T *stack_real;

    //Functions

    explicit Array_stack(bool benchmark){

        Size = 0;
        if(benchmark)
            this->N = 10000000;
        else
            this->N = 100;
        this->stack_real = new T[N];

    }
    ~Array_stack(){

            delete[] stack_real;

    };

    void array_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1, bool printing){

        array_push(Point(x_cor_1, y_cor_1, z_cor_1), printing);

    }
    void array_push(const T& t, bool printing){

        if(Size != N) {
            stack_real[N - 1 - Size] = t;
            Size++;
            if(printing)
                std::cout<<"Point was successfully pushed\n";
        } else{
            std::cout<<"Stack is full, can`t push the element\n";
        }

    }
    void array_pop(bool printing){

        if (!array_is_empty()) {
            //stack_real[100 - Size] = Point();
            Size--;
            if(printing)
                std::cout<<"Top element was successfully poped"<<std::endl;
        } else
            std::cout<<"Stack was empty, nothing to pop\n";
    }
    T array_peek(){

        return stack_real[N - Size];

    }
    bool array_is_empty(){

        return Size == 0;

    }
    int size_of_container(){

        return (sizeof(stack_real[0])*Size + sizeof(Array_stack));

    }

};


#endif //LAB_2_STACK_REALIZATION__ARRAY_STACK_H
