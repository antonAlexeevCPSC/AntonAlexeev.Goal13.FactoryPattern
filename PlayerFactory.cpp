#include <memory>
#include <vector>

#include "Player.h"
#include "PlayerFactory.h"


std::unique_ptr<Object> PlayerFactory::create(std::vector<std::unique_ptr<Object>> objects)
{
	return std::make_unique<Player>();
}
