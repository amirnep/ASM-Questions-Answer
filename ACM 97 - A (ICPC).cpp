#include<iostream>
using namespace std;
int main()
{
	int p1, s1;
	cin >> p1;
	if ((p1 > 20) || (p1 < 0))
	{
		cout << "Error! The goals must be less than";
		return 0;
	}
	cin >> s1;
	if ((s1 > 20) || (s1 < 0))
	{
		cout << "Error! The goals must be less than";
		return 0;
	}
	int s2, p2;
	cin >> s2;
	if ((s2 > 20) || (s2 < 0))
	{
		cout << "Error! The goals must be less than";
		return 0;
	}
	cin >> p2;
	if ((p2 > 20) || (p2 < 0))
	{
		cout << "Error! The goals must be less than";
		return 0;
	}
	if ((s1 + s2) > (p1 + p2))
	{
		cout << "Esteghlal";
	}
	if ((p1 + p2) > (s1 + s2))
	{
		cout << "Persepolis";
	}
	if ((p1 + p2) == (s1 + s2))
	{
		if (s1 > p2)
		{
			cout << "Esteghlal";
		}
		if (p2 > s1)
		{
			cout << "Persepolis";
		}
		if (s1 == p2)
		{
			cout << "Penalty";
		}
	}
}