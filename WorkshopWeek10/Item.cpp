#include "Item.h"
#include "ItemObserver.h"
#include <string>

void Item::changeState(ItemState newState)
{
	state = newState;
}

void Item::addObserver(Patron* notifPatron)
{
	observers.push_back(new ItemObserver(notifPatron));
}