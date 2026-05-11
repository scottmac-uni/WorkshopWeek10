#pragma once
#include <iomanip>
using namespace std;
class IFineStrategy;


class LendingRecords
{
public:
	tm returnDate;
	tm borrowedDate;
	int itemID;
	int patronID;

	int generateFiles();
	void setFineStrategy(IFineStrategy strategy);
private:
};
