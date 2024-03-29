#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int number;
    string department;
    string position;
    void set_name(string n) { name = n; };
    void set_number(int num) { number = num; };
    void set_department(string d) { department = d; };
    void set_position(string p) { position = p; };
    string get_name() { return name; };
    int get_number() { return number; };
    string get_department() { return department; };
    string get_position() { return position; };
};

int main() {

    setlocale(LC_ALL, "RUS");

    Employee e1;
    Employee e2;
    Employee e3;

    e1.set_name("Настасья Блохина");
    e1.set_number(667896);
    e1.set_department("ИТ");
    e1.set_position("Программист");

    e2.set_name("Егор Крид");
    e2.set_number(378909);
    e2.set_department("Бухгалтерия");
    e2.set_position("Директор");

    e3.set_name("Роберт Паттисон");
    e3.set_number(998765);
    e3.set_department("Производственный");
    e3.set_position("Токарь");

    cout << "1 сотрудник:\n" <<
        "Имя: " << e1.get_name() << "\t Номер: " << e1.get_number() <<
        "\nОтдел: " << e1.get_department() << "\tДолжность: " << e1.get_position() << "\n";
    cout << "\n2 сотрудник:\n" <<
        "Имя: " << e2.get_name() << "\t Номер: " << e2.get_number() <<
        "\nОтдел: " << e2.get_department() << "\tДолжность: " << e2.get_position() << "\n";
    cout << "\n3 сотрудник:\n" <<
        "Имя: " << e3.get_name() << "\t Номер: " << e3.get_number() <<
        "\nОтдел: " << e3.get_department() << "\tДолжность: " << e3.get_position() << "\n";
    return 0;

}