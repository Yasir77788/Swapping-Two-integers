//  Swapping two integers without using a third party variable

#include <iostream>

int main()
{
	int first{}, second{};
	std::cout << "Enter two integers separated by a space: ";
	std::cin >> first >> second;

	first ^= second; // ^ for XOR
	second ^= first;
	first ^= second;
	std::cout << "In reverse order they are " << first << " and " << second << std::endl;

	std::cin.get();
	std::cin.get();
	return 0;
}