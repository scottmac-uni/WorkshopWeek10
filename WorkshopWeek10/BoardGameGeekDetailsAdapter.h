#pragma once

#include "DetailsLoader.h"
#include "BoardGameGeekDetailsLoader.h"
#include <string>
#include <memory>

class BoardGameGeekDetailsAdapter : public DetailsLoader {
	std::unique_ptr<BoardGameGeekDetailsLoader> loader;
public:
	void loadItemDetails(std::string reference);
	BoardGameGeekDetailsAdapter();
};
