//
// Created by Win10Pro on 14.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__LIST_STACK_H
#define LAB_2_STACK_REALIZATION__LIST_STACK_H

#include "ListNode.h"

class List_stack {

private:

public:

    //Body of stack

    ListNode* head;
    ListNode* tail;
    int length;
    //bool printing = false;

    //Functions

    List_stack();
    void list_create_and_push(double x_cor_1, double y_cor_1, double z_cor_1,bool printing);
    void list_push(const Point& point,bool printing);
    void list_pop(bool printing);
    Point list_peek();
    bool list_is_empty();


};


#endif //LAB_2_STACK_REALIZATION__LIST_STACK_H
