#include <iostream>

using namespace std;

int main() {

    const double PAY_INCREASE = 0.056;

    while (true) {

        double formerSalary, amount, newAnnual, newMonthly;
        char exit;

        cout << "Enter former annual salary:\n";
        cin >> formerSalary;
        amount = formerSalary * PAY_INCREASE;
        newAnnual = formerSalary + amount;
        newMonthly = newAnnual / 12;
        cout << "Amount of increased pay: " << amount << endl;
        cout << "New annual salary: " << newAnnual << endl;
        cout << "New monthly salary: " << newMonthly << endl;

        cout << "Exit? (y/n):\n";
        cin >> exit;
        if (exit == 'y') {
            break;
        }

    }

    return 0;

}