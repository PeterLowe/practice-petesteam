// pete

#include <iostream>
int main()
{
	int number = 9;// number from user

	std::cout << "the number please : ";
	std::cin >> number;
	if (number % 2 == 0)
	{
		std::cout << "number is even" << std::endl;
	}

	return 1;
}