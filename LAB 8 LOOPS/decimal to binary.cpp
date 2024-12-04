#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int binary= 0;
	int place = 1;
	int rem = 0;
	cout << "Enter the number: ";
	cin >> n;
	for (;n > 0;n /=2)
	{
		rem = n % 2;
		binary = binary + (rem * place);
		place *= 10;
	}
	cout << "Decimal " << n << "to binary :" << binary;
	system("pause");
	return 0;

}