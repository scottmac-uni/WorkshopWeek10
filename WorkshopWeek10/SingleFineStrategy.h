#pragma once
#include "IFineStrategy.h"

class SingleFineStrategy : public IFineStrategy {
	float flatFee;

public:
	float generateFine();
	SingleFineStrategy(float flatFee);
};