#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name{};
	std::string surname{};

	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << std::endl << "Enter your surname: ";
	std::cin >> surname;
	std::cout << std::endl << "Welcome, " << name << ' ' << surname << '!' << std::endl;

	return EXIT_SUCCESS;
}