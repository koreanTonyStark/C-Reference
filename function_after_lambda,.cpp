#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <time.h>

//compare
class CMP
{
public:
	bool operator()(int a, int b)
	{
		return a > b;
	}
};

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	const long long SIZE = 5000000;
	int *a = new int[SIZE];

	CMP cmp2;

	for (long long i = 0; i < SIZE; ++i)
		a[i] = rand();

	int t1 = GetTickCount();

	//std::sort(a, a + SIZE, cmp);
	//std::sort(a, a + SIZE, cmp2);
	std::sort(a, a + SIZE, [](int a, int b)
	{
		return a > b;
	}
	);
	int t2 = GetTickCount() - t1;
	

	std::cout << "time : " << t2 << std::endl;

	//std::for_each(a,a+SIZE,)
		

	delete[] a;

	return 0;
}
