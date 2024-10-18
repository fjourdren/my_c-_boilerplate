#include <iostream>

#include "module1/hello_module1.hpp"

std::string hello() {
    return "Hello from Main!";
}

int main(int argc, char *argv[]) {
    std::cout << hello_module1() << std::endl;
    system("PAUSE");
    return 0;
}