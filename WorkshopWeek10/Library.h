#pragma once


#define LIBRARY_H

#include <vector>
#include <memory>

class Catalogue;
class Staff;
class Patron;
class Hold;
class NotificationSystemFacade;
class LendingRecord;
class Item;

using namespace std;
class Library
{
private:
    unique_ptr<Catalogue> catalogue;

    vector<Staff> staff;
    vector<Patron> patrons;
    vector<Hold> onHoldItems;

    unique_ptr<NotificationSystemFacade> nsf;

    vector<LendingRecord> lendingRecords;
    vector<LendingRecord> records;

    Item* searchItem(int item_id);

public:
    Library();

    void putOnHold(int itemId, int patronId);
};

