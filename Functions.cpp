//
// Created by Win10Pro on 14.02.2020.
//

#include "Functions.h"

Vector_stack Functions::create_new_vector_stack() {

    Vector_stack vectorStack;

    return vectorStack;

}

Array_stack Functions::create_new_array_stack() {

    Array_stack arrayStack;

    return arrayStack;

}

List_stack Functions::create_new_list_stack() {


    List_stack listStack;

    return listStack;

}

void Functions::vector_stack_interactive(Vector_stack vectorStack) {

    char response = 'y';

    while (response == 'y'){

        /*
         * Create new vector_stack
         * Create new point and push it to vector_stack
         * Pop point
         * Peek top element and cout it values
         * Peek top element and pass it values to new point
         * Check for emptiness
         */
        std::cout<<"Please choose the operation which you want to do with Vector_stack :\n"
                   "1 - Create new point and push it to vector_stack\n"
                   "2 - Pop the top point from stack\n"
                   "3 - Peek top element and print all it values\n"
                   "4 - Check vector_stack for emptiness\n";

        short key;
        std::cin>>key;

        if(key == 1){
            std::cout<<"Please enter coordinates of new point(3 double numbers):\n";
            double x_cor_1, y_cor_1, z_cor_1;
            std::cin>>x_cor_1>>y_cor_1>>z_cor_1;
            vectorStack.vector_create_and_push(x_cor_1, y_cor_1, z_cor_1, true);
        }
        if(key == 2){
            vectorStack.vector_pop(true);

        }
        if(key == 3){
            if(vectorStack.vector_is_empty())
                std::cout<<"Stack is empty, nothing to return\n";
            else {
                std::cout << "There are value of coordinates of top point in stack:\n"
                             "X-coordinate = " << vectorStack.vector_peek().x_cor << "\n"
                             "Y-coordinate = " << vectorStack.vector_peek().y_cor << "\n"
                             "Z-coordinate = " << vectorStack.vector_peek().z_cor << "\n";
            }
        }
        if(key == 4){
            if(vectorStack.vector_is_empty())
                std::cout<<"Stack is empty\n";
            else
                std::cout<<"Stack isn`t empty, there are "<<vectorStack.stack_real.size()<<" elements in stack\n";
        }

        std::cout<<"If you want to continue doing something with this stack press 'y', press 'n' if you don`t\n";
        char response_1;
        std::cin>>response_1;
        response = response_1;
    }

}

void Functions::array_stack_interactive(Array_stack arrayStack) {

    char response = 'y';

    while (response == 'y'){

        /*
         * Create new vector_stack
         * Create new point and push it to vector_stack
         * Pop point
         * Peek top element and cout it values
         * Peek top element and pass it values to new point
         * Check for emptiness
         */
        std::cout<<"Please choose the operation which you want to do with Array_stack :\n"
                 "1 - Create new point and push it to array_stack\n"
                 "2 - Pop the top point from stack\n"
                 "3 - Peek top element and print all it values\n"
                 "4 - Check array_stack for emptiness\n";

        short key;
        std::cin>>key;

        if(key == 1){
            std::cout<<"Please enter coordinates of new point(3 double numbers):\n";
            double x_cor_1, y_cor_1, z_cor_1;
            std::cin>>x_cor_1>>y_cor_1>>z_cor_1;
            arrayStack.array_create_and_push(x_cor_1, y_cor_1, z_cor_1, true);
        }
        if(key == 2){
            arrayStack.array_pop(true);
        }
        if(key == 3){
            if(arrayStack.array_is_empty())
                std::cout<<"Stack is empty, nothing to return\n";
            else {
                std::cout << "There are value of coordinates of top point in stack:\n"
                             "X-coordinate = " << arrayStack.array_peek().x_cor << "\n"
                             "Y-coordinate = " << arrayStack.array_peek().y_cor << "\n"
                             "Z-coordinate = " << arrayStack.array_peek().z_cor << "\n";
            }
        }
        if(key == 4){
            if(arrayStack.array_is_empty())
                std::cout<<"Stack is empty\n";
            else
                std::cout<<"Stack isn`t empty, there are "<<arrayStack.Size<<" elements in stack\n";
        }

        std::cout<<"If you want to continue doing something with this stack press 'y', press 'n' if you don`t\n";
        char response_1;
        std::cin>>response_1;
        response = response_1;
    }


}

void Functions::list_stack_interactive(List_stack listStack) {

    char response = 'y';

    while (response == 'y'){

        /*
         * Create new vector_stack
         * Create new point and push it to vector_stack
         * Pop point
         * Peek top element and cout it values
         * Peek top element and pass it values to new point
         * Check for emptiness
         */
        std::cout<<"Please choose the operation which you want to do with List_stack :\n"
                 "1 - Create new point and push it to list_stack\n"
                 "2 - Pop the top point from stack\n"
                 "3 - Peek top element and print all it values\n"
                 "4 - Check list_stack for emptiness\n";

        short key;
        std::cin>>key;

        if(key == 1){
            std::cout<<"Please enter coordinates of new point(3 double numbers):\n";
            double x_cor_1, y_cor_1, z_cor_1;
            std::cin>>x_cor_1>>y_cor_1>>z_cor_1;
            listStack.list_create_and_push(x_cor_1, y_cor_1, z_cor_1, true);
        }
        if(key == 2){
            listStack.list_pop(true);
        }
        if(key == 3){
            if(listStack.list_is_empty())
                std::cout<<"Stack is empty, nothing to return\n";
            else {
                std::cout << "There are value of coordinates of top point in stack:\n"
                            "X-coordinate = " << listStack.list_peek().x_cor << "\n"
                            "Y-coordinate = " << listStack.list_peek().y_cor << "\n"
                            "Z-coordinate = " << listStack.list_peek().z_cor << "\n";
            }
        }
        if(key == 4){
            if(listStack.list_is_empty())
                std::cout<<"Stack is empty\n";
            else
                std::cout<<"Stack isn`t empty, there are "<<listStack.length<<" elements in stack\n";
        }

        std::cout<<"If you want to continue doing something with this stack press 'y', press 'n' if you don`t\n";
        char response_1;
        std::cin>>response_1;
        response = response_1;
    }

}

void Functions::vector_stack_demo(Vector_stack vectorStack, double x_cor_1, double y_cor_1, double z_cor_1,
                                  double x_cor_2, double y_cor_2, double z_cor_2) {

    /*
 * create - peek - create another - peek - pop - peek - pop - show is empty - peek - pop
 * for every stack;
 */
    std::string breakpoint;
    std::cout<<"It`s start of demo mode for Vector_stack\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    std::cout<<"Firstly, we will create new point and push it to stack\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    vectorStack.vector_create_and_push(x_cor_1, y_cor_1, z_cor_1, true);

    std::cout<<"Now, we will peek top point and print all it coordinates\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << vectorStack.vector_peek().x_cor << "\n"
                 "Y-coordinate = " << vectorStack.vector_peek().y_cor << "\n"
                 "Z-coordinate = " << vectorStack.vector_peek().z_cor << "\n";

    std::cout<<"Now, we will create another point, push it to stack, and peek it\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    vectorStack.vector_create_and_push(x_cor_2, y_cor_2, z_cor_2, true);
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << vectorStack.vector_peek().x_cor << "\n"
                 "Y-coordinate = " << vectorStack.vector_peek().y_cor << "\n"
                 "Z-coordinate = " << vectorStack.vector_peek().z_cor << "\n";

    std::cout<<"Now, we will pop top point and peek top point to show that point was poped\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    vectorStack.vector_pop(true);
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << vectorStack.vector_peek().x_cor << "\n"
                 "Y-coordinate = " << vectorStack.vector_peek().y_cor << "\n"
                 "Z-coordinate = " << vectorStack.vector_peek().z_cor << "\n";
    std::cout<<"Now, we will pop top point and show that stack is empty\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    vectorStack.vector_pop(true);
    if(vectorStack.vector_is_empty())
        std::cout<<"Stack is empty\n";
    std::cout<<"Now, we will try to pop the top element, but we will see that poping doesn`t work\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    vectorStack.vector_pop(true);
    std::cout<<"This is the end of Vector_stack`s demo mode\n";

}

void Functions::array_stack_demo(Array_stack arrayStack, double x_cor_1, double y_cor_1, double z_cor_1, double x_cor_2,
                            double y_cor_2, double z_cor_2) {

    std::string breakpoint;
    std::cout<<"It`s start of demo mode for Array_stack\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    std::cout<<"Firstly, we will create new point and push it to stack\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    arrayStack.array_create_and_push(x_cor_1, y_cor_1, z_cor_1, true);

    std::cout<<"Now, we will peek top point and print all it coordinates\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << arrayStack.array_peek().x_cor << "\n"
                 "Y-coordinate = " << arrayStack.array_peek().y_cor << "\n"
                 "Z-coordinate = " << arrayStack.array_peek().z_cor << "\n";

    std::cout<<"Now, we will create another point, push it to stack, and peek it\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    arrayStack.array_create_and_push(x_cor_2, y_cor_2, z_cor_2, true);
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << arrayStack.array_peek().x_cor << "\n"
                 "Y-coordinate = " << arrayStack.array_peek().y_cor << "\n"
                 "Z-coordinate = " << arrayStack.array_peek().z_cor << "\n";

    std::cout<<"Now, we will pop top point and peek top point to show that point was poped\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    arrayStack.array_pop(true);
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << arrayStack.array_peek().x_cor << "\n"
                 "Y-coordinate = " << arrayStack.array_peek().y_cor << "\n"
                 "Z-coordinate = " << arrayStack.array_peek().z_cor << "\n";
    std::cout<<"Now, we will pop top point and show that stack is empty\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    arrayStack.array_pop(true);
    if(arrayStack.array_is_empty())
        std::cout<<"Stack is empty\n";
    std::cout<<"Now, we will try to pop the top element, but we will see that poping doesn`t work\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    arrayStack.array_pop(true);
    std::cout<<"This is the end of Array_stack`s demo mode\n";

}

void Functions::list_stack_demo(List_stack listStack, double x_cor_1, double y_cor_1, double z_cor_1, double x_cor_2,
                                double y_cor_2, double z_cor_2) {

    std::string breakpoint;
    std::cout<<"It`s start of demo mode for List_stack\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    std::cout<<"Firstly, we will create new point and push it to stack\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    listStack.list_create_and_push(x_cor_1, y_cor_1, z_cor_1, true);

    std::cout<<"Now, we will peek top point and print all it coordinates\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << listStack.list_peek().x_cor << "\n"
                 "Y-coordinate = " << listStack.list_peek().y_cor << "\n"
                 "Z-coordinate = " << listStack.list_peek().z_cor << "\n";

    std::cout<<"Now, we will create another point, push it to stack, and peek it\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    listStack.list_create_and_push(x_cor_2, y_cor_2, z_cor_2, true);
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << listStack.list_peek().x_cor << "\n"
                 "Y-coordinate = " << listStack.list_peek().y_cor << "\n"
                 "Z-coordinate = " << listStack.list_peek().z_cor << "\n";

    std::cout<<"Now, we will pop top point and peek top point to show that point was poped\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    listStack.list_pop(true);
    std::cout << "There are value of coordinates of top point in stack:\n"
                 "X-coordinate = " << listStack.list_peek().x_cor << "\n"
                 "Y-coordinate = " << listStack.list_peek().y_cor << "\n"
                 "Z-coordinate = " << listStack.list_peek().z_cor << "\n";
    std::cout<<"Now, we will pop top point and show that stack is empty\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    listStack.list_pop(true);
    if(listStack.list_is_empty())
        std::cout<<"Stack is empty\n";
    std::cout<<"Now, we will try to pop the top element, but we will see that poping doesn`t work\n"
               "cin anything to continue\n";
    std::cin>>breakpoint;
    listStack.list_pop(true);
    std::cout<<"This is the end of List_stack`s demo mode\n";

}

void Functions::vector_stack_benchmark(Vector_stack vectorStack) {

    std::ofstream f ("../Files/Vector benchmark data.txt");
    std::cout<<"This is data for Vector_stack:\n";
    f<<"This is data for Vector_stack:\n\n";

    for(int N = 1; N <= 10000000; N*= 10){

        clock_t start = clock();
        for(int i = 1; i <= N; i++){
            vectorStack.vector_create_and_push(1, 1, 1, false);
        }
        clock_t end = clock();
        std::cout<<"Pushing "<< N <<" elements = "<<(end - start)<<" ms\n";
        f<<"Pushing "<< N <<" elements = "<<(end - start)<<" ms\n";
        clock_t start_1 = clock();
        for(int i = 1; i <= N; i++){
            vectorStack.vector_pop(false);
        }
        clock_t end_1 = clock();
        std::cout<<"Popping "<<N <<" elements = "<<(end_1 - start_1)<<" ms\n";
        f<<"Popping "<<N <<" elements = "<<(end_1 - start_1)<<" ms\n\n";
    }
    f.close();

}

void Functions::array_stack_benchmark(Array_stack arrayStack) {

    std::ofstream f ("../Files/Array benchmark data.txt");
    std::cout<<"\nThis is data for Array_stack:\n";
    f<<"This is data for Array_stack:\n\n";

    for(int N = 1; N <= 10000000; N*= 10){

        clock_t start = clock();
        for(int i = 1; i <= N; i++){
            arrayStack.array_create_and_push(1, 1, 1, false);
        }
        clock_t end = clock();
        std::cout<<"Pushing "<< N <<" elements = "<<(end - start)<<" ms\n";
        f<<"Pushing "<< N <<" elements = "<<(end - start)<<" ms\n";

        clock_t start_1 = clock();
        for(int i = 1; i <= N; i++){
            arrayStack.array_pop(false);
        }
        clock_t end_1 = clock();
        std::cout<<"Popping "<<N <<" elements = "<<(end_1 - start_1)<<" ms\n";
        f<<"Popping "<<N <<" elements = "<<(end_1 - start_1)<<" ms\n\n";
    }

    f.close();

}

void Functions::list_stack_benchmark(List_stack listStack) {

    std::ofstream f ("../Files/List benchmark data.txt");
    std::cout<<"\nThis is data for List_stack:\n";
    f<<"This is data for List_stack:\n\n";

    for(int N = 1; N <= 10000000; N*= 10){

        clock_t start = clock();
        for(int i = 1; i <= N; i++){
            listStack.list_create_and_push(1, 1, 1, false);
        }
        clock_t end = clock();
        std::cout<<"Pushing "<< N <<" elements = "<<(end - start)<<" ms\n";
        f<<"Pushing "<< N <<" elements = "<<(end - start)<<" ms\n";

        clock_t start_1 = clock();
        for(int i = 1; i <= N; i++){
            listStack.list_pop(false);
        }
        clock_t end_1 = clock();
        std::cout<<"Popping "<<N <<" elements = "<<(end_1 - start_1)<<" ms\n";
        f<<"Popping "<<N <<" elements = "<<(end_1 - start_1)<<" ms\n\n";

    }

    f.close();

}
