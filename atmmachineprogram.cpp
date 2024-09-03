#include <iostream>
using namespace std;

int main() {
    string userId, password;
    double balance = 0.0;
    char option;

    cout << "Hi! Welcome to the ATM Machine!\n";

    while (true) {
        cout << "\nPlease select an option:\n";
        cout << "1 -> Create New Account\n";
        cout << "2 -> Login\n";
        cout << "q -> Quit\n";
        cout << "Enter your choice: ";
        cin >> option;

        if (option == '1') {
            //create New Account
            cout << "Enter new user ID: ";
            cin >> userId;
            cout << "Enter new password: ";
            cin >> password;
            cout << "Account created successfully!\n";
        } else if (option == '2') {
            //login
            string inputId, inputPassword;
            cout << "Enter user ID: ";
            cin >> inputId;
            cout << "Enter password: ";
            cin >> inputPassword;

            if (inputId == userId && inputPassword == password) {
                cout << "Login successful!\n";

                while (true) {
                    cout << "\nMain Menu:\n";
                    cout << "1 -> Withdraw money\n";
                    cout << "2 -> Deposit money\n";
                    cout << "3 -> Check balance\n";
                    cout << "4 -> Logout\n";
                    cout << "Enter your choice: ";
                    cin >> option;

                    if (option == '1') {
                        // Withdraw Money
                        double amount;
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        if (amount <= balance) {
                            balance -= amount;
                            cout << "Withdrawal successful! New balance: shs" << balance << endl;
                        } else {
                            cout << "Insufficient balance.\n";
                        }
                    } else if (option == '2') {
                        // Deposit Money
                        double amount;
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        balance += amount;
                        cout << "Deposit successful! New balance: shs" << balance << endl;
                    } else if (option == '3') {
                        // Check Balance
                        cout << "Your current balance is: shs" << balance <<endl;
                    } else if (option == '4') {
                        // Logout
                        cout << "Logged out successfully.\n";
                        break;
                    }
                }
            } else {
                cout << "Invalid user ID or password. Please try again.\n";
            }
        } else if (option == 'q') {
            // Quit
            cout << "Thank you for using the ATM Machine. Goodbye!\n";
            break;
        }
    }

    return 0;
}

