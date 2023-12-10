#include <iostream>
using namespace std;

bool is_prime(int num)
{
	int x;
	for (x = 2;x <= num;x++)
	{
		if (num % x == 0)
		{
			return false;
			break;
		}
		else
			return true;
	}
}

void is_prime(int x, int y) {
	for (int i = x;i <= y;i++) 
	{
		int j = 0;
		for (j = 2;j <= i;j++) 
		{
			if (i % j == 0) 
				break;
		}
		if (i == j)
			cout << i << "\t";
		if (i == 29 || i == 71 || i == 113 || i == 173)
			cout << "\n";
	}
}

int main() 
{
	is_prime(0, 200);
	return 0;
}
