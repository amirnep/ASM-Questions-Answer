#include<iostream>
using namespace std;
void a(int& n, int& m, int& k)
{
	int a = n - (m + k);
	cout << a << endl;
}
int main()
{
	int n, m, k;
	do
	{
		cout << "Enter n,m,k: " << endl;
		cin >> n >> m >> k;
		if ((n < 1) || (n > 1000))
		{
			break;
		}
		if ((m < 1) || (m > 1000))
		{
			break;
		}
		if ((k < 1) || (k > 1000))
		{
			break;
		}
		if (m + k > n)
		{
			cout << "-1";
			break;
		}
		if (k <= m)
		{
			a(n, m, k);
		}
		if (k > m)
		{
			cout << "-1" << endl;
		}
	} while (m + k <= n);
}