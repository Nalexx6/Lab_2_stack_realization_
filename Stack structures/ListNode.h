//
// Created by Win10Pro on 14.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__LISTNODE_H
#define LAB_2_STACK_REALIZATION__LISTNODE_H

#include "Point.h"

class ListNode {

private:

public:

    Point point{};
    ListNode* prev;
    ListNode* next;

    explicit ListNode(const Point &point);


};


#endif //LAB_2_STACK_REALIZATION__LISTNODE_H
