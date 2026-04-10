////#include <iostream>
////#include <string>
////#include <climits>
////using namespace std;
////
////int main()
////{
////	int n;
////	cin >> n;
////	int sum = INT_MIN;
////	while (n--)
////	{
////		int num;
////		cin >> num;
////		string s = to_string(num);
////		int size = s.size();
////		int ans = 0;
////		while (size--)
////		{
////			ans += num % 10;
////			num /= 10;
////			
////		}
////		if (ans > sum)
////		{
////			sum = ans;
////		}
////	}
////	cout << sum << endl;
////	return 0;
////}
//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int max_sum = INT_MIN;
//	while (n--)
//	{
//		long long num;
//		cin >> num;
//		int ans = 0;
//		while (num > 0)
//		{
//			ans += num % 10;
//			num /= 10;
//		}
//		if (ans > max_sum)
//		{
//			max_sum = ans;
//		}
//	}
//	cout << max_sum << endl;
//	return 0;
//}