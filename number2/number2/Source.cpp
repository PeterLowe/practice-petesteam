// pete



#include <iostream>
int main()
{

	int number = 8;// user number
	std::cout << "what's the number :";
		std::cin >> number;
	if (number % 2 == 1)
	{
		std::cout << "number is odd" << std::endl;
	}
	return 1;
}