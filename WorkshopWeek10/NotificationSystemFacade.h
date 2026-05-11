#pragma once
class Patron;

class NotificationSystemFacade
{
public:
    NotificationSystemFacade() = default;
    ~NotificationSystemFacade() = default;
    void sendNotification(Patron* p, std::string itemName);
};