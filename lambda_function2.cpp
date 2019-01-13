#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <array>

class CIsOdd
{
public:
	bool operator()(int i)
	{
		return ((i % 2) == 1);
	}
};

#ifdef JH
int main(int argc, char** argv)
{
	std::vector<int> v = { 10, 25, 40, 55 };
	
	CIsOdd objIsOdd;

	auto it = std::find_if(v.cbegin(), v.cend(), objIsOdd);

	std::cout << "[Using Functor] : The first odd value is " << *it << std::endl;

	return 0;
}
#else 
int main(int argc, char **argv)
{
	std::vector<int> v = { 10, 25, 40, 55 };

	auto it2 = std::find_if(v.cbegin(), v.cend(), [](int i)->bool
	{
		return (i % 2) == 1;
	});

	std::cout << "[Using Lambda] : The first odd value is " << *it2 << std::endl;

	return 0;
}


#endif 
