
#include <iostream>

struct Test
{
	int n;
	Test()
	{
		n = rand();
	}
};

int compare(const void* lhs, const void* rhs)
{
	int a = ((Test*)lhs)->n;
	int b = ((Test*)rhs)->n;

	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
		
}

int main()
{
	Test tt[10000];
	qsort(tt, 10000, sizeof(Test), compare);

	for (int i = 0; i < 10000; i++)
		std::cout << tt[i].n << std::endl;


}