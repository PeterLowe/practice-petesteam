// odd C00301432

#include<iostream>

int main()
{
	int number = 8; //user number

	std::cout << "What is your number :";
	std::cin >> number;
	if (number % 2 == 0)
	{
		std::cout << "The number is even" << std::endl;
	}
	return 1;
}