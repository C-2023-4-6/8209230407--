#include <iostream>
using namespace std;

int main()
{
	int peach = 1;
	int i;
	for (i = 0;i < 9;i++)
	{
		peach = (peach + 1) * 2;
	}
	cout << peach << endl;
	return 0;
}