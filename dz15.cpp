
#include <iostream>

int main()

{      
	static int N = 32;
	for (int x = 1; x < N + 1; x++)
	{
		if (x % 2 == 0)
		{
			std::cout << x << " \n";
		}
		else
		{
			if (x % 2 != 0)
			{
				std::cout << x << " ";

			}
			
		}

	}

}



