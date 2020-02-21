

#include "Mode.h"
int main() {
    /*
     * class Point
     * cpp
     */
    Mode mode;
    char response = 'y', response_1;
    short key;


    while (response == 'y'){
            std::cout << "Hello, select the mode\n"
                         "1 - interactive\n"
                         "2 - demo\n"
                         "3 - benchmark\n";
        std::cin >> key;
        if (key == 1)
            mode.interactive();
        if (key == 2)
            mode.demo();
        if (key == 3)
            mode.benchmark();

        std::cout<<"Press y, if you want to execute another mode, or press n, if you don`t\n";
        std::cin>>response_1;
        response = response_1;

    }

    return 0;

}