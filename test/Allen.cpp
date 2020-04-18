/*************************************************************************
  > File Name   : Allen.cpp
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Saturday, April 18, 2020 PM04:38:43 HKT
 ************************************************************************/
#include <iostream>
#include "Allen.h"

REFLECT(Allen);

Allen::Allen() {
    std::cout << "Allen() consructor!" << std::endl;
}

Allen::~Allen() {
    std::cout << "~Allen() deconstructor!" << std::endl;
}

void Allen::show() {
    std::cout << "Hello, I'm Allen." << std::endl;
}
