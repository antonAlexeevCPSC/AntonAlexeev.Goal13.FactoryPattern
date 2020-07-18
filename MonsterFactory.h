#ifndef MONSTERFACTORY_H
#define MONSTERFACTORY_H

class MonsterFactory: public ObjectFactory 
{
public:
	std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>> objects);
};

#endif
