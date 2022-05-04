#include "Header.h"

Students::Students() {
	name = "Unknown";
	lastname = "Unknown";
	age = 0;
	int marks[countMarks] = {0,0,0};
}

Students::Students(std::string name1, std::string lastname1, int age1, int* marks1) {
	this->name = name1;
	this->lastname = lastname1;
	this->age = age1;
	int* m = new int[countMarks];
	for (int i = 0; i < countMarks; i++) {
		marks[i] = marks1[i];
	}
}

Students::~Students() {

}

void Students::printStudents() {
	std::cout << name << ' ' << lastname << ' ' << age << ' ';
	std::cout << '(';
	for (int i = 0; i < countMarks; i++) {
		std::cout << marks[i] << ' ';
	}
	std::cout << ')';
}

Students& Students::operator=(Students other) {
	this->name = other.name;
	this->lastname = other.lastname;
	this->age = other.age;
	for (int i = 0; i < countMarks; i++) {
		this->marks[i] = other.marks[i];
	}
	setlocale(0, "");
	return *this;
}

std::ostream& operator<<(std::ostream& os, Students& a) {
	os << "Имя студента - " << a.name << ", фамилия студента - " << a.lastname << ", возраст - " << a.age << ", оценки - ";
	for (int i = 0; i < countMarks; i++) {
		os << a.marks[i] << " ";
	}
	setlocale(0, "");
	return os;
}

std::istream& operator>>(std::istream& is, Students& a) {
	setlocale(0, "");
	std::cout << "Введите имя:\n";
	is >> a.name;
	std::cout << "Введите фамилию:\n";
	is >> a.lastname;
	std::cout << "Введите возраст:\n";
	is >> a.age;
	std::cout << "Введите 3 оценки студента:\n";
	for (int i = 0; i < countMarks; i++) {
		is >> a.marks[i];
	}
	return is;
}