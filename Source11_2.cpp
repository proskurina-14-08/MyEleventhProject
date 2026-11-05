#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	
	std::string rightWord{"pencil"};
	std::string userWord{};

	do
	{
		std::cout << "Guess the word: ";
		std::cin >> userWord;
		if (rightWord != userWord)
			std::cout << "Incorrect" << std::endl;
		else
			std::cout << "Right! You won! The hidden word is “pencil”" << std::endl;
	} 
	while (rightWord != userWord);
	
	return EXIT_SUCCESS;
}