#pragma once
#include <string>

class DetailsLoader {
public:
	virtual void loadItemDetails(std::string reference) = 0;
};