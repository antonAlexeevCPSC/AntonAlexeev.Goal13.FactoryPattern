#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include <memory>	
#include <vector>
#include "Object.h"

class ObjectFactory 
{
public:
	virtual std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>>) = 0;
};


#endif
