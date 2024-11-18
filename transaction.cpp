#include "transaction.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

void addTransaction(std::vector<Transaction>& transactions) {
    Transaction t;
    std::cout << "Enter date (YYYY-MM-DD): ";
    std::cin >> t.date;
    std::cout << "Enter category: ";
    std::cin.ignore();
    std::getline(std::cin, t.category);
    std::cout << "Enter amount (positive for income, negative for expense): ";
    std::cin >> t.amount;
    transactions.push_back(t);
    std::cout << "Transaction added successfully!\n";
}

void viewTransactions(const std::vector<Transaction>& transactions) {
    if (transactions.empty()) {
        std::cout << "No transactions to display.\n";
        return;
    }
    std::cout << "\nDate         Category          Amount\n";
    std::cout << "--------------------------------------\n";
    for (const auto& t : transactions) {
        std::cout << std::setw(12) << t.date << "  "
                  << std::setw(15) << t.category << "  $"
                  << std::fixed << std::setprecision(2) << t.amount << "\n";
    }
}

void saveTransactions(const std::vector<Transaction>& transactions, const std::string& filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Error saving to file.\n";
        return;
    }
    for (const auto& t : transactions) {
        file << t.date << "," << t.category << "," << t.amount << "\n";
    }
    file.close();
    std::cout << "Transactions saved to " << filename << " successfully!\n";
}

