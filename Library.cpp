#include "Library.h"

Library::Library() 
{
	{inventory["player"], std::make_unique<PlayerFactory>(); };
	{inventory["monster"], std::make_unique<MonsterFactory>(); };	
}