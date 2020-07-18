#ifndef PLAYERFACTORY_H
#define PLAYERFACTORY_H

class PlayerFactory: public ObjectFactory 
{
	std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>> objects);
};

#endif
