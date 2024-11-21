#include<iostream>
using namespace std;
int main()
{
	int Greetmsg;
	cout <<"1 for Morning\n2 for Afternoon\n3 for Evening\n4 for Midnight: " << endl;
	cin >> Greetmsg;
	switch (Greetmsg) {
	case 1:
		cout << "Morning";
		break;
	case 2:
		cout << "Afternoon";
		break;
	case 3:
		cout << "Evening";
		break;
	case 4:
		cout << "Night";
		break;

		default:
		cout << "Invalid Input";
		break;
	}
	return 0;
}