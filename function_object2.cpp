#include <iostream>
#include <algorithm>

struct Functor1
{
	void operator()(int n)
	{
		std::cout << n << std::endl;
	}
};

struct Functor2
{
	void operator()(int n)
	{
		std::cout << n * n << std::endl;
	}
};

struct Functor3
{
	void operator()(int n)
	{
		std::cout << "integer : " << n << std::endl;
	}
};

int main()
{
	int arr[5] = { 10,20,30,40,50 };

	Functor1 functor1;
	functor1(3);
	std::cout << std::endl;

	std::for_each(arr, arr + 5, Functor1());
	std::cout << std::endl;

	std::for_each(arr, arr + 5, Functor2());
	std::cout << std::endl;

	std::for_each(arr, arr + 5, Functor3());
	std::cout << std::endl;



	return 0;
}
