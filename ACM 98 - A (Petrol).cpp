#include<iostream>
using namespace std;
int main()
{
	int n, k, a, c, b;
	cout << "Please enter a mount of petrol used: ";
	cin >> n;
	cout << "Please enter a mount of petrol in quota this month: ";
	cin >> k;
	if ((n > 200) || (n < 0))
	{
		cout << "Error! The amount must be less than.";
		return 0;
	}
	if ((k > 360) || (k < 0))
	{
		cout << "Error! The amount must be less than.";
		return 0;
	}
	if (n > 60 + k)
	{
		a = n - (k + 60);
		a = a * 3000;
		c = (60 + k) * 1500;
		cout << c + a;
	}
	if (n < 60 + k)
	{
		b = n * 1500;
		cout << b;
	}

}