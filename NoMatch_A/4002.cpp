//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool isSquare(int num)
//{
//	if (num <= 0)
//	{
//		return false;
//	}
//	int s = sqrt(num);
//	return s * s == num;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int a;
//		cin >> a;
//		bool ok = false;
//		for (int x = 1; x * x < a;x++)
//		{
//			int rest = a - x * x;
//			if (isSquare(rest))
//			{
//				ok = true;
//				break;
//			}
//		}
//		cout << (ok ? "Yes" : "No") << endl;
//	}
//	return 0;
//}