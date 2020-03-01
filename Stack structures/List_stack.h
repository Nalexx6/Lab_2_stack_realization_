//
// Created by Win10Pro on 14.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__LIST_STACK_H
#define LAB_2_STACK_REALIZATION__LIST_STACK_H

#include "Point.h"

template <typename T>
class List_stack {

private:

public:

    //Body of stack

    class ListNode {

    public:

         T t;
        ListNode* prev;
        ListNode* next;

        explicit ListNode(const T& t){

            this->t = t;
            prev = nullptr;
            next = nullptr;

        }


    };
    ListNode*  head;
    ListNode*  tail;
    int length;
    //bool printing = false;

    //Functions

    List_stack(){

        head = nullptr;
        tail = nullptr;
        length = 0;

    }
    ~List_stack(){}

    void list_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1,bool printing){

        list_push(Point(x_cor_1,y_cor_1,z_cor_1), printing);

    }
    void list_push(const T& t,bool printing){

        auto *node = new ListNode(t) ;
        node->next = head;
        if (head) {
            head->prev = node;
        }
        head = node;
        if (!tail) {
            tail = node;
        }
        length++;
        if(printing)
            std::cout<<"Element was successfully pushed\n";

    }
    void list_pop(bool printing) {
        if(list_is_empty())
            std::cout<<"Stack is empty, nothing to pop\n";
        if(length == 1){

            head = nullptr;
            tail = nullptr;
            length--;
            if(printing)
                std::cout<<"Top element was successfully poped"<<std::endl;


        }
        if(length > 1){

            head = head->next;
            head->prev = nullptr;
            length--;
            if(printing)
                std::cout<<"Top element was successfully poped"<<std::endl;

        }

    }
    T list_peek(){

        return head->t;

    }
    bool list_is_empty(){

        return length == 0;

    }
    int size_of_container(){

        return (sizeof(ListNode)*length + sizeof(List_stack));

    }

};


#endif //LAB_2_STACK_REALIZATION__LIST_STACK_H
