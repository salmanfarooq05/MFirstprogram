#include<iostream>
using namespace std;
int main()
{
	double temp;
	cout << "Enter the temperature: " << endl;
	cin >> temp;
	if (temp == 25)
	{
		cout << "it is a normal day" << endl;
	}
	else if (temp > 30)
	{
		cout << "It is a hot day" <<endl;
	}
	
	return 0;
	
}