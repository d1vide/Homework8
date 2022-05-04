#include "Header.h"

int main() {
	setlocale(0, "");
	std::string name = "Alexey";
	std::string lastname = "Naumov";
	int age = 18;
	int mark[countMarks] = { 1, 3, 2 };
	Students b( name, lastname, age, &mark[0]);
	Students a;

	a = b; 

	std::cout << '\n' << a << "\n\n" << b << '\n';
	std::cin >> a;
	std::cout << a;

}