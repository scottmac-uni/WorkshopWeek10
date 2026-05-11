#pragma once

#include "DetailsLoader.h"
#include "BoardGameGeekDetailsLoader.h"
#include <string>
#include <memory>

class BoardGameGeekDetailsLoader {
public:
	void loadGameDetails(std::string title);
};
