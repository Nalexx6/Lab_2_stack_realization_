//
// Created by Win10Pro on 16.02.2020.
//

#include <fstream>
#include "Mode.h"

void Mode::interactive() {
    Functions function;
    char response = 'y';

    while (response == 'y') {

        std::cout << "Please select the mode:\n"
                     "1 - create new Vector_stack and do something with it\n"
                     "2 - create new Array_stack and do something with it\n"
                     "3 - create new List_stack and do something with it\n";

        short key;
        std::cin >> key;
        if (key == 1) {
            function.vector_stack_interactive(function.create_new_vector_stack());
        }
        if (key == 2) {
            function.array_stack_interactive(function.create_new_array_stack());
        }
        if (key == 3) {
            function.list_stack_interactive(function.create_new_list_stack());
        }

        std::cout<<"If you want to do something with another stack structure press 'y', press 'n' if you don`t\n";
        char response_1;
        std::cin>>response_1;
        response = response_1;

    }
}

void Mode::demo() {
    Functions function;
    short key;
    double x_cor_1, y_cor_1, z_cor_1, x_cor_2, y_cor_2, z_cor_2;
    std::ifstream f ("../Files/Demo default parameters.txt");
    f >> x_cor_1 >> y_cor_1 >> z_cor_1 >> x_cor_2 >> y_cor_2 >> z_cor_2;
    std::cout<<"Choose the stack for which you want to execute the demo\n"
               "1 - Vector_stack\n"
               "2 - Array_stack\n"
               "3 - List-stack\n";
    std::cin>>key;
    /*
     * create - peek - create another - peek - pop - peek - pop - peek - show is empty - pop
     * for every stack;
     */
    char response = 'y', response_1;

    while (response == 'y') {
        if (key == 1)
            function.vector_stack_demo(function.create_new_vector_stack(), x_cor_1, y_cor_1, z_cor_1, x_cor_2, y_cor_2,
                                       z_cor_2);
        if (key == 2)
            function.array_stack_demo(function.create_new_array_stack(), x_cor_1, y_cor_1, z_cor_1, x_cor_2, y_cor_2,
                                      z_cor_2);
        if (key == 3)
            function.list_stack_demo(function.create_new_list_stack(), x_cor_1, y_cor_1, z_cor_1, x_cor_2, y_cor_2,
                                     z_cor_2);

        std::cout<<"Press y, if you want to execute demo for another type of stack, press n, if ou don`t\n";
        std::cin>>response_1;
        response = response_1;
    }

}

void Mode::benchmark() {

    Functions function;
//    std::ofstream f ("../Files/Benchmark data.txt", std::ios::trunc);
//    f.close();
    function.vector_stack_benchmark(function.create_new_vector_stack());
    std::cout<<"\n\n\n";
    function.array_stack_benchmark(function.create_new_array_stack());
    std::cout<<"\n\n\n";
    function.list_stack_benchmark(function.create_new_list_stack());
}
