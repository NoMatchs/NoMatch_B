#include <iostream>
#include <string>
using namespace std;

bool Isbeautiful(int x)
{
	string s = to_string(x);
	char first = s[0];
	for (char c : s)
	{
		if (c != first)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1;i <= n;i++)
	{
		if (Isbeautiful(i))
		{
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}