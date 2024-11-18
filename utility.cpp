#include "utility.hpp"
#include <iostream>
#include <iomanip>

void generateSummary(const std::vector<Transaction>& transactions) {
    double totalIncome = 0, totalExpenses = 0;
    for (const auto& t : transactions) {
        if (t.amount > 0) totalIncome += t.amount;
        else totalExpenses += t.amount;
    }
    std::cout << "\nSummary:\n";
    std::cout << "Total Income: $" << std::fixed << std::setprecision(2) << totalIncome << "\n";
    std::cout << "Total Expenses: $" << -totalExpenses << "\n";

}

void displayMenu() {
    std::cout << "\n--- Personal Expense Tracker ---\n";
    std::cout << "1. Add Transaction\n";
    std::cout << "2. View Transactions\n";
    std::cout << "3. Save Transactions\n";
    std::cout << "4. Load Transactions\n";
    std::cout << "5. Generate Summary\n";
    std::cout << "6. Exit\n";
    std::cout << "Choose an option: ";
}
