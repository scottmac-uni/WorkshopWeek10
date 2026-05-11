#pragma once

#include "DetailsLoader.h"
#include "ISBNdbDetailsLoader.h"
#include <string>

class ISBNdbDetailsAdapter : public DetailsLoader {
	ISBNdbDetailsLoader loader;
public:
	void loadItemDetails(std::string reference);
	ISBNdbDetailsAdapter();
};