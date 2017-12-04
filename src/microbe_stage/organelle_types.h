#pragma once

#include "general/json_registry.h"

#include <map>
#include <vector>
#include <string>

namespace thrive {

class SimulationParameters;

class OrganelleType : public RegistryType {
public:
	double mass = 1000.0; // A large value so we notice if i screwed up. :D
	char gene = '@';
	unsigned int mpCost = 0;
	std::string mesh = "default_organelle.mesh"; // TODO: have a default mesh so we can test organelles.
	std::map<unsigned int, unsigned int> composition;
	std::vector<unsigned int> components; // This have the functionality of each organelle.

	OrganelleType();

	OrganelleType(Json::Value value);
};

}
