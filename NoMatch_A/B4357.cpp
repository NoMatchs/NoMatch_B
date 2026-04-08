//#include <iostream>
//#include <cmath>
//#include <unordered_set>
//using namespace std;
//
//int main()
//{
//	int l, r;
//	cin >> l >> r;
//	int sum = 0;
//	unordered_set<long long> s;
//	for (int x = 0; x <= 30;x++)
//	{
//		for (int y = x;y <= 30;y++)
//		{
//			long long num = (1LL << x) + (1LL << y);
//			s.insert(num);
//		}
//	}
//
//	int ans = 0;
//	for (long long n : s)
//	{
//		if (n >= 1 && n <= r)
//		{
//			ans++;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}