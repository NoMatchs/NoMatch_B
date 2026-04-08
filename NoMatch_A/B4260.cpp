//#include <iostream>
//using namespace std;
//
//bool isleap(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int getdays(int y, int m)
//{
//	switch (m)
//	{
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		return 31;
//	case 4: case 6: case 11:
//		return 30;
//	case 2: 
//		return isleap(y) ? 29 : 28;
//	default:
//		return 0;
//	}
//}
//
//int main()
//{
//	int y, m, d, h, k;
//	cin >> y >> m >> d >> h >> k;
//	bool IsRun = false;
//	
//	int total_h = h + k;
//	int h_new = total_h % 24;
//	int add_day = total_h / 24;
//	d += add_day;
//
//	while (true)
//	{
//		int M_d = getdays(y, m);
//		if (d > M_d)
//		{
//			d -= M_d;
//			m++;
//			if (m > 12)
//			{
//				m = 1;
//				y++;
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	cout << y << " " << m << " " << d << " " << h_new << endl;
//	return 0;
//}