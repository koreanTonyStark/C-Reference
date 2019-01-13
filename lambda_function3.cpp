int main(int argc, char *argv[])
{
	//EvenOddFunctor functor;
	std::array<int, 10> theList = { 1,2,3,4,5,6,7,8,9,10 };

	int evenSum = 0;
	int oddSum = 0;
	std::for_each(theList.cbegin(), theList.cend(), [&](int i)
	{
		if (i % 2 == 0)
			evenSum += i;
		else
			oddSum += i;
	});

	std::cout << "Sum of evens: " << evenSum << std::endl;
	std::cout << "Sum of odds: " << oddSum << std::endl;

	return 0;

}
