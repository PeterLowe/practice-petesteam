// odd C00301432
// even C00301432 

#include <iostream>


int main()
{
	int input = 7; // user inputted number 
	std::cout << "Think of a number ?";
	std::cin >> input;

	if (input % 2 == 1)
	{
		std::cout << "The number was odd" << std::endl;
	}
	return 1;
}