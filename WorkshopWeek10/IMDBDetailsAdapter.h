#pragma once

#include "DetailsLoader.h"
#include "IMDBDetailsLoader.h"
#include <string>

class IMDBDetailsAdapter : public DetailsLoader {
	IMDBDetailsLoader loader;
public:
	void loadItemDetails(std::string reference);
	IMDBDetailsAdapter();
};
