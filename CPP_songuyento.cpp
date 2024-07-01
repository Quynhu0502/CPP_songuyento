// CPP_songuyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int so;
	cout << " nhap so: ";
	cin >> so;
	for (int i = 2; i <= so; i++)
	{
		bool IP = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0)
			{
			IP = false;
				break;

			}
		}
		if (IP)
		{
			cout << i << " ";
		}
	}
	return 0;
}
