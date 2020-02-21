//
// Created by Win10Pro on 13.02.2020.
//

#ifndef LAB_2_STACK_REALIZATION__POINT_H
#define LAB_2_STACK_REALIZATION__POINT_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>

class Point {

private:


public:
    //Variables
    double x_cor;
    double y_cor;
    double z_cor;

    Point (double x_cor, double y_cor, double z_cor);
    Point () = default;
};


#endif //LAB_2_STACK_REALIZATION__POINT_H
