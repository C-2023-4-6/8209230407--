#include <iostream>
using namespace std;

int app1(int m,int n)
{
	int a;
	while (n != 0)
	{
		a = m % n;
		m = n;
		n = a;
	}
	return m;
}

int app2(int m, int n)
{
	int b = m * n;
	return b / app1(m, n);
}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << "m,n的最大公约数为：" << app1(x, y) << endl;
	cout << "m,n的最小公倍数为：" << app2(x, y) << endl;
}