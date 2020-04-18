/*************************************************************************
  > File Name   : Luffy.cpp
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Saturday, April 18, 2020 PM04:43:20 HKT
 ************************************************************************/

#include <iostream>
#include "Luffy.h"

REFLECT(Luffy);

Luffy::Luffy() {
    std::cout << "Luffy() constructor!" << std::endl;
}

Luffy::~Luffy() {
    std::cout << "~Luffy() deconstructor!" << std::endl;
}

void Luffy::show() {
    std::cout << "Hello, I'm Luffy." << std::endl;
}
