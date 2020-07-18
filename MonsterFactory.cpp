#include <memory>
#include <vector>

#include "Monster.h"
#include "MonsterFactory.h"

std::unique_ptr<Object> MonsterFactory::create(std::vector<std::unique_ptr<Object>> objects)
{
	return std::make_unique<Monster>(objects.begin());
}
