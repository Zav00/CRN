
#ifndef CRM_REPORTGENERATOR_H
#define CRM_REPORTGENERATOR_H
#include <iostream>
#include <string>
#include "Customer.h"
#include "InteractionHistory.h"

class ReportGenerator {
public:
    static  void generateReport(const Customer& customer, const std::vector<InteractionHistory>& interactions) {
        std::cout << "Customer Name: " << customer.getName() << std::endl;
        std::cout << "Contact Info: " << customer.getContactInfo() << std::endl;
        std::cout << "Interaction History:" << std::endl;
        for (const InteractionHistory &interaction: interactions) {
            std::cout << "Type: " << interaction.getType() << std::endl;
            std::cout << "Date: " << interaction.getData() << std::endl;
            std::cout << "User: " << interaction.getUser() << std::endl;
            std::cout << std::endl;
        }
    }
};
#endif //CRM_REPORTGENERATOR_H
