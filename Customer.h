
#ifndef CRM_CUSTOMER_H
#define CRM_CUSTOMER_H
#include <string>
#include <iostream>
class Customer {
private:
    std::string name;
    std::string contactInfo;
public:
    Customer(const std::string &name, const std::string &contactInfo) : name(name), contactInfo(contactInfo) {}

    const std::string &getName() const {
        return name;
    }

    const std::string &getContactInfo() const {
        return contactInfo;
    }
};
#endif //CRM_CUSTOMER_H
