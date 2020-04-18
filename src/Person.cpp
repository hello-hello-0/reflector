/*************************************************************************
  > File Name   : Person.cpp
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Saturday, April 18, 2020 PM04:50:22 HKT
 ************************************************************************/
#include <iostream>
#include "Person.h"

Person::Person() {
    std::cout << "Person() constructor!" << std::endl;
}

Person::~Person() {
    std::cout << "~Person() deconstructor!" << std::endl;
}

void Person::show() {
    std::cout << "Hello, I'm person." << std::endl;
}
