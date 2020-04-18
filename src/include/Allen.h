/*************************************************************************
  > File Name   : Allen.h
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Saturday, April 18, 2020 PM04:35:44 HKT
 ************************************************************************/

#ifndef _ALLEN_H
#define _ALLEN_H

#include "Person.h"

class Allen : public Person {
    public:
        Allen();
        virtual ~Allen();
        virtual void show();
    
};
#endif
