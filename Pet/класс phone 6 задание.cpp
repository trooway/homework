#include <iostream>
#include <string>

class Phone {
private:
    std::string number;
    std::string model;
    int weight;

public:
    // Constructor with three parameters
    Phone(std::string num, std::string mod, int w) : number(num), model(mod), weight(w) {}

    // Constructor with two parameters
    Phone(std::string num, std::string mod) : number(num), model(mod), weight(0) {}

    // Default constructor
    Phone() : number(""), model(""), weight(0) {}

    void receiveCall(std::string callerName) {
        std::cout << "Calling " << callerName << std::endl;
    }

    std::string getNumber() {
        return number;
    }
};

int main() {
    Phone phone1("952450025", "iPhone 13", 164);
    Phone phone2("950441235", "iPhone 14", 171);
    Phone phone3("950618100", "Realmi 8Pro");

    phone1.receiveCall("Darya");
    std::cout << "Phone number: " << phone1.getNumber() << std::endl;

    phone2.receiveCall("Karina");
    std::cout << "Phone number: " << phone2.getNumber() << std::endl;

    phone3.receiveCall("Alina");
    std::cout << "Phone number: " << phone3.getNumber() << std::endl;

    return 0;
}