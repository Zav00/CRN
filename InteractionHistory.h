
#ifndef CRM_INTERACTIONHISTORY_H
#define CRM_INTERACTIONHISTORY_H
#include<iostream>
class InteractionHistory {
private:
    std::string type;
    std::string data;
    std::string user;
public:
    InteractionHistory(const std::string &type, const std::string &data, const std::string &user) : type(type),
                                                                                                    data(data),
                                                                                                    user(user) {}

    const std::string &getType() const {
        return type;
    }
    const std::string &getData() const {
        return data;
    }
    const std::string &getUser() const {
        return user;
    }
};
#endif //CRM_INTERACTIONHISTORY_H
