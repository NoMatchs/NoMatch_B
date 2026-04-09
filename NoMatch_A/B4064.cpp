//#include <iostream>
//#include <cmath>
//using namespace std;
//
//typedef long long ll;
//
//ll find_b(ll a)
//{
//	ll s = sqrt(a);
//	while (s * s > a)
//	{
//		s--;
//	}
//	while ((s + 1)*(s + 1) <= a)
//	{
//		s++;
//	}
//	if (s * s != a)
//	{
//		return -1;
//	}
//	ll b = sqrt(s);
//	while (b * b > s)
//	{
//		b--;
//	}
//	while ((b + 1) * (b + 1) <= s)
//	{
//		b++;
//	}
//	if (b * b == s)
//	{
//		return b;
//	}
//	return -1;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		ll a;
//		cin >> a;
//		cout << find_b(a) << endl;
//	}
//}