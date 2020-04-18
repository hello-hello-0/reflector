/*************************************************************************
  > File Name   : Person.h
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Saturday, April 18, 2020 PM04:47:26 HKT
 ************************************************************************/

#ifndef _PERSON_H
#define _PERSON_H
#include "Reflector.h"

class Person : public ReflectObject {
    public:
        Person();
        virtual ~Person();
        virtual void show();
};
#endif
