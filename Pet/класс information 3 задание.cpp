#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Information {
public:
    string FIO;
    string address;
    int age;
    int phone_number;

    void set_FIO(string name) { FIO = name; };
    void set_address(string adres) { address = adres; };
    void set_age(int age1) { age = age1; };
    void set_phone_number(int number) { phone_number = number; };

    string get_FIO() { return FIO; };
    string get_address() { return address; };
    int get_age() { return age; };
    int get_phone_number() { return phone_number; };

    Information() {
        cout << "Введите ваше имя: ";
        string n;
        cin.ignore();
        getline(cin, n);
        set_FIO(n);

        cout << "Введите ваш адрес: ";
        string a;
        getline(cin, a);
        set_address(a);

        cout << "Введите ваш возраст: ";
        int ag;
        cin >> ag;
        set_age(ag);

        cout << "Введите номер телефона: ";
        int nu;
        cin >> nu;
        set_phone_number(nu);
    }
};

int main() {
    setlocale(LC_ALL, "ru");

    cout << "Введите информацию о себе:\n";
    Information me;

    cout << "Введите информацию о своем друге:\n";
    Information friend;

    cout << "Введите информацию о своей семье:\n";
    Information family;

    return 0;
}