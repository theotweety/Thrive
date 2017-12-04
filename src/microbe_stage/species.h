#pragma once

#include "general/json_registry.h"

#include <map>
#include <string>
#include <vector>
#include <Ogre.h>

namespace thrive {

class SimulationParameters;

class Species : public RegistryType {
public:
	double spawnDensity = 0.0;
	Ogre::ColourValue colour;
	std::map<unsigned int, unsigned int> startingCompounds;
	std::map<int, unsigned int> organelles; // TODO: get a position as the key.

	Species();

	Species(Json::Value value);
};

}
