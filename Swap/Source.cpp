#include<iostream>
using namespace std;

void swap(int e,string x)
{
	while (e >= 0)
	{
		char* p2;
		p2 = &x[e];		
		if (*p2 >= 65 && *p2 <= 90)
		{
			*p2 = *p2 + 32;
		}
		else if (*p2 >= 97 && *p2 <= 122)
		{
			*p2 = *p2 - 32;
		}
		cout << *p2;
		e--;
	}
}
int main()
{
	int i = 0, s, e;
	string x;
	cout << "Enter letters or numbers: ";
	cin >> x;
	s = x.size();
	e = s - 1;
	char* p1, * p2;
	while (i < s)
	{
		p1 = &x[i];		
		if (*p1 >= 65 && *p1 <= 90)
		{
			*p1 = *p1 + 32;
		}
		else if (*p1 >= 97 && *p1 <= 122)
		{
			*p1 = *p1 - 32;
		}
		cout << *p1;
		i++;
	}
	cout << endl;
	swap(e,x);

	return 0;
}