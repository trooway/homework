#include <iostream>
#include <string>

using namespace std;

class Retailitem {
public:
    string description;
    int count;
    float price;
    void set_description(string d) { description = d; };
    void set_count(int c) { count = c; };
    void set_price(float p) { price = p; };
    string get_description() { return description; };
    int get_count() { return count; };
    float get_price() { return price; };
};

int main() {

    setlocale(LC_ALL, "RUS");

    Retailitem a[3];
    a[0].set_description("Платье");
    a[0].set_count(15);
    a[0].set_price(67.45);

    a[1].set_description("Лонгслив");
    a[1].set_count(20);
    a[1].set_price(35.30);

    a[2].set_description("Кепка");
    a[2].set_count(40);
    a[2].set_price(15.55);

    for (int i = 0; i < 3; i++) {
        cout << "Товар: " << a[i].get_description() << endl;
        cout << "Количество: " << a[i].get_count() << endl;
        cout << "Цена: " << a[i].get_price() << endl << endl;
    }

    return 0;
}