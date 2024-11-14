//#include<iostream>
//using namespace std;
//
//int main() {
//	int chocolates, weight, pounds, ounces, grams, kgrams;
//	char choice;
//	cout << "Enter the number of chocolates being sold: ";
//	cin >> chocolates;
//	cout << "Enter weight of one chocolate in ounces: ";
//	cin >> weight;
//	cout << "Enter the choice for weighing";
//
//	cout << "\n\t => Enter O to calculate in ounces \n \t => P for pounds \n \t => G for grams \n \t => Kfor kilograms \n";
//
//	cout << "Enter your Choice: ";
//	cin >> choice;
//
//	if (choice == 'O') {
//		ounces = chocolates * weight;
//		cout << " Weight in ounces is " << ounces << endl;
//	}
//	else if (choice == 'P') {
//		pounds = chocolates * weight / 16;
//		cout << "Weight in pounds is " << pounds << endl;
//	}
//	else if (choice == 'G') {
//		grams = chocolates * weight * 28.349;
//		cout << "Weight in grams is " << grams << endl;
//	}
//	else if (choice == 'K') {
//		kgrams = chocolates * weight * 28.349 / 1000;
//		cout << "Weight in kilograms is " << kgrams << endl;
//	}
//	else {
//		cout << "Enter a valid choice " << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}