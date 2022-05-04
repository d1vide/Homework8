#pragma once
#include <iostream>
#include <string>

const int countMarks = 3;  // Кол-во оценок
class Students {
private:
	std::string name;
	std::string lastname;
	int age;
	int marks[countMarks];
public:
	Students();
	Students(std::string name, std::string lastname, int age, int* marks);
	~Students();

	void printStudents();

	Students& operator=(Students other);
	friend std::ostream& operator<<(std::ostream& os, Students& a);
	friend std::istream& operator>>(std::istream& is, Students& a);
};




