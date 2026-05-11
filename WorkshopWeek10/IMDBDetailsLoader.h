#pragma once

#include "DetailsLoader.h"
#include "IMDBDetailsLoader.h"
#include <string>

class IMDBDetailsLoader {
public:
	void loadMovieDetails(std::string ISAN_id);

	IMDBDetailsLoader();
};
