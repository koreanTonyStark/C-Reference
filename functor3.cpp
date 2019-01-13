#include <iostream>
#include <algorithm>
#include <vector>

class PrintTimes
{
private:
	int _n;
public:
	PrintTimes(int n) : _n(n) {}
	void operator()(int i)
	{
		std::cout << _n << " * " << i << " = " << i * _n << std::endl;
	}
};

int main()
{
	std::vector<int> v;
	
	for (int i = 1; i < 10; ++i)
		v.push_back(i);
	
	for (std::vector<int>::iterator ii = ++v.begin(); ii != v.end(); ++ii)
		for_each(v.begin(), v.end(), PrintTimes(*ii));
}
