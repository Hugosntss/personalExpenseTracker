#include <iostream>
#include <vector>
#include "transaction.hpp"
#include "utility.hpp"

int main() {
    std::vector<Transaction> transactions;
    std::string filename = "transactions.txt";
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                addTransaction(transactions);
                break;
            case 2:
                viewTransactions(transactions);
                break;
            case 3:
                saveTransactions(transactions, filename);
                break;
            case 4:
                loadTransactions(transactions, filename);
                break;
            case 5:
                generateSummary(transactions);
                break;
            case 6:
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
