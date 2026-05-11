#pragma once
#include "IFineStrategy.h"

class PopularityFineStrategy : public IFineStrategy {
	float popularityMultiplier;

public:
	float generateFine();
	PopularityFineStrategy(float popularityMultiplier);
};