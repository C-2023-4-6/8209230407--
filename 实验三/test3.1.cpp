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
	cout << "m,n�����Լ��Ϊ��" << app1(x, y) << endl;
	cout << "m,n����С������Ϊ��" << app2(x, y) << endl;
}