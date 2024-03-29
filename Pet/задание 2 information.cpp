class Information {
private:
	// Переменные класса
	string name, address, phone_num;
	int age;

public:
	// Коструктор класса
	Information(string name, string address, string phone_num, int age) {

		this->name = name;
		this->address = address;
		this->phone_num = phone_num;
		this->age = age;

	}

	// Методы класса
	void set_name(string name) { this->name = name; } void set_address(string address) { this->address = address; } void set_phone_num(string phone_num) { this->phone_num = phone_num; } void set_age(int age) { this->age = age; }
	void get_info(string type) {

		if (type == "name") cout << "[ NAME ] -> " << name << '\n';
		if (type == "address") cout << "[ ADDRESS ] -> " << address << '\n';
		if (type == "phone_num") cout << "[ PHONE NUMBER ] -> " << phone_num << '\n';
		if (type == "age") cout << "[ AGE ] -> " << age << '\n';

	} void get_info() { cout << setw(35) << left << name << setw(25) << address << setw(15) << phone_num << setw(5) << age << '\n'; }

};
