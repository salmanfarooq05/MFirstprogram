#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout << "Enter the numbe of rows: ";
	cin >> rows;
	for (int i = 1;i <= rows;i++)
	{
		int cofi = 1;
		for (int j = 1;j <= rows - i;j++)
		{
			cout << " ";
		}
		for (int k = 1;k <=i;k++)
		{
			cout << cofi << " ";
			cofi = cofi * (i - k) / k;
		}
		cout << endl;
	}
	return 0;
}