#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>
#include <array>

int main(int argc, char **argv)
{
	std::array<int, 10> arr = { 3,2,1,4,9,10,7,8,4,6 };

	auto ShowOriginalArray = [=]()
	{
		std::for_each(arr.cbegin(), arr.cend(), [](int i)
		{
			std::cout << i << ",";
		});
		std::cout << std::endl;
	};

	ShowOriginalArray(); // lambda function 대입 했더니 functor처럼 실행가능 by auto 
	//arr의 이전 값을 capture 하고 있는 듯?? 
	std::sort(arr.begin(), arr.end(), std::less<int>());
	//sort는 밖에서 했는디?? 
	auto ShowSortedArray = [=]()
	{
		std::for_each(arr.cbegin(), arr.cend(), [](int n)
		{
			std::cout << n << ",";
		});
		std::cout << std::endl;
	};

	ShowSortedArray(); // lambda function에서 capture by value로 해서 lambda 내부에서만 됨 
	
	ShowOriginalArray(); //다음에 적용되지 않는다?? 
}
