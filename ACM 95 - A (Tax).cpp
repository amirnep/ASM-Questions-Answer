#include<iostream>
using namespace std;
int main()
{
	int i;
	do
	{
		cout << "Please enter an income: " << endl;
		cin >> i;
		if (i % 1000 != 0)
		{
			cout << "Error!";
			break;
		}
		if (i > 10000000)
		{
			cout << "Error!";
			break;
		}
		if (i == 0)
		{
			break;
		}
		if (i <= 1000000)
		{
			cout << i << endl;
		}
		if ((i > 1000000) && (i <= 5000000))
		{
			i = i - (i * 0.1);
			cout << i << endl;
		}
		if (i > 5000000)
		{
			i = i - (i * 0.2);
			cout << i << endl;
		}
	} while (i < 10000000);
	return 0;
}