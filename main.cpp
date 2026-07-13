#include <iostream>
using namespace std;

int main() {
    int id;
    string name;
    float salary, bonus, total;

    cout << "Employee ID: ";
    cin >> id;

    cout << "Employee Name: ";
    cin >> name;

    cout << "Salary: ";
    cin >> salary;

    cout << "Bonus: ";
    cin >> bonus;

    total = salary + bonus;

    cout << "\n-----Employee Details-----" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Total Salary: " << total << endl;

    return 0;
}