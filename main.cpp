#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "ReportGenerator.h"

void saveReportToFile(const Customer& customer, const std::vector<InteractionHistory>& interactions) {
    std::string filename = customer.getName() + "_" + interactions.back().getData() + ".txt";
    std::ofstream file (filename);

    if (file.is_open()) {
        file << "Customer Name: " << customer.getName() << std::endl;
        file << "Contact Info: " << customer.getContactInfo() << std::endl;

        file << "Interaction History:" << std::endl;
        for (const InteractionHistory& interaction : interactions) {
            file << "Type: " << interaction.getType() << std::endl;
            file << "Date: " << interaction.getData()<< std::endl;
            file << "User: " << interaction.getUser() << std::endl;
            file << std::endl;
        }

        std::cout << "Report saved to file: " << filename << std::endl;
    } else {
        std::cout << "Error: Unable to save report to file." << std::endl;
    }
}

int main() {
    Customer customer("John Doe", "john.doe@example.com");
    InteractionHistory interaction1("Call", "2023-07-10", "User1");
    InteractionHistory interaction2("Email", "2023-07-09", "User2");
    InteractionHistory interaction3("Meeting", "2023-07-08", "User3");
    std::vector<InteractionHistory> interactions;
    interactions.push_back(interaction1);
    interactions.push_back(interaction2);
    interactions.push_back(interaction3);
    ReportGenerator::generateReport(customer, interactions);
    saveReportToFile(customer, interactions);

    return 0;
}