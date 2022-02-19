#include<iostream>
using namespace std;
int main()
{
	int c, d;
	int ps, pc, pp;
	int min = 0;
	do
	{
		cout << "Please enter call & data: " << endl;
		cin >> c >> d;
		if ((c < 1) && (c > 1000))
		{
			cout << "Error!Please Enter a valid call.";
			break;
		}
		if ((d < 1) && (d > 1000))
		{
			cout << "Error!Please Enter a valid data.";
			break;
		}
		ps = c * 30 + d * 40;
		pc = c * 35 + d * 30;
		pp = c * 40 + d * 20;
		if ((ps< pc) && (ps < pp))
		{
			cout << ps << endl;
		}
		if ((pc < ps) && (pc < pp))
		{
			cout << pc << endl;
		}
		if ((pp < ps) && (pp < pc))
		{
			cout << pp << endl;
		}
		if ((ps == pc) || (ps == pp))
		{
			cout << ps << endl;
		}
		if ((c == 0) && (d == 0))
		{
			break;
		}
	} while ((c <= 1000) && (d <= 1000));
	return 0;
}