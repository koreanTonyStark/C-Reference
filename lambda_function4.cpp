#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <array>

int main(int argc, char *argv[])
{
	[](void) {std::cout << "살고싶다" << std::endl; }();

	[](std::string name) {std::cout << "Hello" << name.c_str() << std::endl; }("World");

	bool bChk = [](int a)->bool
	{
		if (a % 2 == 0)
			return false;
		return true;
	}(1);

	std::cout << bChk << std::endl;

	return 0;

}
