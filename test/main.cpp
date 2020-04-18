/*************************************************************************
  > File Name   : main.cpp
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Saturday, April 18, 2020 PM04:32:51 HKT
 ************************************************************************/

#include <iostream>
using namespace std;
#include "Person.h"
#include "Reflector.h"

int main(int argc, char **argv){

    Person *allen = getNewInstance<Person>("Allen");
    Person *luffy = getNewInstance<Person>("Luffy");
    allen->show();
    luffy->show();

    delete allen;
    delete luffy;

    return 0;
}
