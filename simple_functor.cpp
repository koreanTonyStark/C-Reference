#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <array>

class Functor
{
public:
	void operator()()
	{
		std::cout << "Simple Functor" << std::endl;
	}
};

int main(void)
{
	Functor func;
	func();
	return 0;
}

