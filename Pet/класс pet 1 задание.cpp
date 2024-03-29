﻿#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    string name;
    string animal_type;
    int age;
    void set_name(string n) { name = n; };
    void set_animal_type(string t) { animal_type = t; };
    void set_age(int a) { age = a; };

    string get_name() { return name; };
    string get_animal_type() { return animal_type; };
    int get_age() { return age; };


    Pet() {
        name = "";
        animal_type = "";
        age = 0;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    Pet P1;
    P1.set_name("Nastya");
    P1.set_animal_type("Lama");
    P1.set_age(18);
    cout << "Name: " << P1.get_name() << endl;
    cout << "Animal type: " << P1.get_animal_type() << endl;
    cout << "Age: " << P1.get_age() << endl;

    return 0;
}