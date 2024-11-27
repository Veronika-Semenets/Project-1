#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    system("color B5");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    string last_name;
    cout << "Enter last name: ";
    getline(cin, last_name);

   
    string first_name;
    cout << "Enter first name: ";
    getline(cin, first_name);

    
    int age;
    cout << "Enter age: ";
    cin >> age;


    string texst;
    cout << "Enter address: ";
    getline(cin, texst);

    // Очищення буфера після введення числа
    cin.ignore();


    // Вивід введених даних
    cout << "\nYour data:" << endl;
    cout << "Last name: " << last_name << endl;
    cout << "First name: " << first_name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << texst << endl;
    return 0;
}