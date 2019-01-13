#include <iostream>

//enum MENU{ADD, MINUS};
//inline int Add(int a, int b) { return a + b; }
//inline int Minus(int a, int b) { return a - b; }

typedef struct _Down
{
	inline int operator()(int a, int b) { return a < b; }
	
}Down;

typedef struct _Up
{
	inline int operator()(int a, int b) { return a > b; }
}Up;

template<typename T>
void Sort(int *x, int n, T cmp)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (cmp(x[i], x[j]))
				x[i] ^= x[j] &= x[i] ^= x[j];
		}
	}
}



int main()
{
	Down down;
	Up up;
	std::cout << down(1, 3) << std::endl;
	std::cout << up(1, 3) << std::endl;
	int data[10] = { 0, 1, 2, };
	Sort(data, 10, [](int a, int b) {return (a < b ? true : false);});

	return 0;
}