
#include <iostream>

int main()
{
 
	static int N = 22;
	for (int x = 0; x < N + 1; x++) 
	{

		if (x % 2 == 0)
		{
			std::cout << x << " ";
		}

		else
		{
			std::cout << x;
		}

	}

}

