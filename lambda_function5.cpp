#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <array>

int main(int argc, char **argv[])
{
	int a = 0;

	[=]()mutable
	{
		a++;
		std::cout << "inside of lambda : " << a << std::endl;
	}();
	std::cout << "outside of lambda : " << a << std::endl;
	
	return 0;
}
