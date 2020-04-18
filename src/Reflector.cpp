/*************************************************************************
  > File Name   : Reflector.cpp
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Saturday, April 18, 2020 PM05:25:24 HKT
 ************************************************************************/

#include "Reflector.h"

Reflector::Reflector() {
    
}

Reflector::~Reflector() {
    std::map<std::string, ObjectFactory*>::iterator it = objecFactories.begin();

    for(; it != objecFactories.end(); ++it) {
        delete it->second;
    }
    objecFactories.clear();

}

void Reflector::registerFactory(const std::string& className, ObjectFactory* of) {
    std::map<std::string, ObjectFactory*>::iterator it = objecFactories.find(className);
    if(it != objecFactories.end()) {
        std::cout << "class has existed... " << std::endl;
    }
    else {
        objecFactories[className] = of;
    }
}


ReflectObject* Reflector::getNewInstance(const std::string& className) {
    std::map<std::string, ObjectFactory*>::iterator it = objecFactories.find(className);
    if (it != objecFactories.end()) {
        ObjectFactory* of = it->second;
        return of->newInstance();
    }
    return NULL;
}

Reflector& reflector() {
    static Reflector reflector;
    std::cout << "reflector()" << std::endl;
    return reflector;
}

