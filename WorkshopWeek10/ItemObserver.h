#pragma once
using namespace std;
class NotificationSystemFacade;
class Patron;


class ItemObserver
{
public:
	Patron* patron;
	NotificationSystemFacade* nsf;
	
	void stateChanged();
private:
};
