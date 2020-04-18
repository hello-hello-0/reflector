/*************************************************************************
  > File Name   : Luffy.h
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Saturday, April 18, 2020 PM04:42:27 HKT
 ************************************************************************/

#ifndef _LUFFY_H
#define _LUFFY_H
#include "Person.h"
class Luffy : public Person {
    public:
        Luffy();
        virtual ~Luffy();
        virtual void show();
};
#endif
