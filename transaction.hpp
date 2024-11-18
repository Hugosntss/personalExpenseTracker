#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <vector>

struct Transaction {
    std::string date;      // format: YYYY-MM-DD
    std::string category;  // expense category
    double amount;         // positive for income, negative for expense
};

// Functions to manage transactions
void addTransaction(std::vector<Transaction>& transactions);
void viewTransactions(const std::vector<Transaction>& transactions);
void saveTransactions(const std::vector<Transaction>& transactions, const std::string& filename);
void loadTransactions(std::vector<Transaction>& transactions, const std::string& filename);

#endif
