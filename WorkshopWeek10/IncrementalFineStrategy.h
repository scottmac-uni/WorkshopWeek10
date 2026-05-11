#pragma once
#include "IFineStrategy.h"

class IncrementalFineStrategy : public IFineStrategy {
	float initialOverdueCost;
	float additionalOverdueCost;

public:
	float generateFine();

	IncrementalFineStrategy(float initialOverdueCost, float additionalOverdueCost);
};