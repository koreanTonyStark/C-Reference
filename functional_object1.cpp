#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <array>

struct Accumulator
{
	Accumulator()
	{
		counter = 0;
	}
	int counter;
	int operator()(int i)
	{
		return counter += i;
	}
};

int main(void)
{
	Accumulator a;
	std::cout << a(10) << std::endl;
	std::cout << a(20) << std::endl;
	return 0;
}


