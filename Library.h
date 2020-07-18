#ifndef LIBRARY_H
#define LIBRARY_H

#include <map>
#include <memory>
#include <string>

#include "ObjectFactory.h"
#include "MonsterFactory.h"
#include "PlayerFactory.h"

class Library 
{
public:
	std::map<std::string, std::unique_ptr<ObjectFactory>> inventory;
};
#endif
