#include "NotificationSystemFacade.h"
#include "Patron.h"
#include <iostream>

void NotificationSystemFacade::sendNotification(Patron* p, std::string itemName) {
    std::cout << p->name << " " << itemName << " is available!";
}