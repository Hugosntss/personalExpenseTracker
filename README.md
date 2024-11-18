# Personal Expense Tracker <sub>by Hugo Santos</sub>

## What is it?
![2024-11-17-19-39-47](https://github.com/user-attachments/assets/61652917-f4c5-49e5-805d-3bc501530a86)

&ensp;&ensp;&ensp; This program is a practical tool for managing your finances. It helps you track what you earn and spend, keeps your data safe, and gives clear summaries to help you budget better. 
It’s built using foundational C++ concepts like structs, vectors, file handling, and formatted output, making it a great learning project and a useful application!

###  1. Adding Transactions
&ensp;The program lets you add a transaction by entering the date (e.g., "2024-11-17"), a category (like "Food" or "Rent"), and the amount (positive for income, negative for expenses). 
Each transaction is stored as a record.

Code Used:
A ``struct`` named Transaction is used to group these details (date, category, and amount).
A ``std::vector`` stores all the transactions so you can add as many as you want dynamically.

### 2. Viewing Transactions
&ensp;You can view all your recorded transactions, neatly displayed in a table with the date, category, and amount.

Code Used:
A ``for`` loop iterates through the ``std::vector`` to display each transaction.
The ``iomanip`` library is used to format the output in a clear and organized way, aligning columns.

### 3. Saving Transactions
&ensp;You can save your transactions to a file (e.g., "transactions.txt"), ensuring your data is not lost when you exit the program.

Code Used:
``std::ofstream`` writes the transactions to the file in a comma-separated format (CSV style), which makes it easy to reload later or open in other programs like Excel.

### 4. Loading Transactions
&ensp;The program allows you to load previously saved transactions from a file so you can continue where you left off.

Code Used:
``std::ifstream`` reads the file line by line, extracting data (using ``std::getline`` and string manipulation) to recreate the Transaction objects and store them in the ``std::vector``.

### 5. Generating a Summary
&ensp;The program calculates a summary of your total income, total expenses, and net savings, giving you a clear idea of your financial situation.

Code Used:
A ``for`` loop goes through the transactions, adding positive amounts to the total income and negative amounts to the total expenses.
Arithmetic is used to calculate savings as income minus expenses.

### 6. Using a Menu
&ensp;The program provides a menu with options to add a transaction, view transactions, save data, load data, and generate a summary. You can keep using it until you choose to exit.

<img width="366" alt="Screenshot 2024-11-17 at 7 45 24 PM" src="https://github.com/user-attachments/assets/114841de-df32-4863-aef0-e2507b0dbfc3">

Code Used:
A ``do-while`` loop ensures the menu keeps showing until the user exits.
A ``switch`` statement processes the user’s choice and calls the appropriate function.

### 7. File Persistence
&ensp;Transactions are saved in a text file in a simple format that can be reloaded later. This makes the program useful for long-term tracking.

Code Used:
File handling (``ofstream and ifstream``) ensures data is stored and retrieved safely.

### 8. Data Organization
&ensp;All transactions are stored in memory as long as the program is running, allowing fast access for viewing and summarizing.

Code Used:
A ``std::vector`` dynamically manages the list of transactions.

### 9. Error Handling
&ensp;If there are issues with saving or loading files (e.g., the file doesn’t exist), the program displays error messages.

Code Used:
Simple ``if`` checks ensure the file is opened successfully before reading or writing.


Explaining video:
# soon
