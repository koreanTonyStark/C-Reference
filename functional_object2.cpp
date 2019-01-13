#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <array>

class EvenOddFunctor
{
public:
	EvenOddFunctor() : evenSum(0), oddSum(0) {}

	void operator() (int x)
	{
		if (x % 2 == 0)
			evenSum += x;
		else
			oddSum += x;
	}
	int sumEven() const { return evenSum; }
	int sumOdd() const { return oddSum; }
private:
	int evenSum;
	int oddSum;
};

int main(void)
{
	EvenOddFunctor functor;
	std::array<int, 10> theList = { 1,2,3,4,5,6,7,8,9,10 };
	functor = std::for_each(theList.cbegin(), theList.cend(), functor);

	std::cout << "Sum of evens: " << functor.sumEven() << std::endl;
	std::cout << "Sum of odds: " << functor.sumOdd() << std::endl;

	getchar();
	return 0;
}