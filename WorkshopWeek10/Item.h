#include <string>
#include <vector>
#include "ItemObserver.h"
#include "Patron.h"

class Item {
protected:
	enum ItemState { ON_HOLD, AVAILABLE, BORROWED };

	int registrationCode;
	int year;
	std::string title;
	bool newRelease;
	std::vector<ItemObserver> observers;
	ItemState state;
	
	virtual ~Item() = 0;
	virtual void changeState(ItemState newState);
	virtual void addObserver(Patron* notifPatron);
};