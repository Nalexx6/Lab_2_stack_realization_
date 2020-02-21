//
// Created by Win10Pro on 14.02.2020.
//

#include "List_stack.h"

List_stack::List_stack() {

    head = nullptr;
    tail = nullptr;
    length = 0;

}

void List_stack::list_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1, bool printing) {

    list_push(Point(x_cor_1,y_cor_1,z_cor_1), printing);

}

void List_stack::list_push(const Point& point, bool printing) {

    auto *node = new ListNode(point);
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
        std::cout<<"Point was successfully pushed\n";

}

void List_stack::list_pop(bool printing) {
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

Point List_stack::list_peek() {

    return head->point;

}

bool List_stack::list_is_empty() {

    return length == 0;

}


