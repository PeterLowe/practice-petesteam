// C00301432 

#include<iostream>

int main()
{
	int number = 9; // number from user 

	std::cout << "The number please :";
	std::cin >> number; 

	if (number % 2 == 0)
	{
		std::cout << "number is even" << std::endl;
	}
	return 1;
}