#include<iostream>
using namespace std;
int main()
//{
//	int maxk[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter the number: ";
//		cin >> maxk[i];
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		cout << maxk[j]<<" ";
//	}
//	return 0;
//}
//Task 3 

//{
//	int sum = 0;
//	int maxk[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter the number: ";
//		cin >> maxk[i];
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		cout << maxk[j]<<" ";
//		sum += maxk[j];
//	}
//	cout << "\nSum of the entering numbers: "<<sum;
//	return 0;
//}
//Task 4
//{
//		
//		int arr[5];
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "Enter the number: ";
//			cin >> arr[i];
//		}
//		int max = arr[0];
//		for (int  j = 0; j < 5;j++)
//		{
//			if (arr[j] > max)
//			{
//				max = arr[j];
//			}
//		}
//		cout << "\nMaximum Element: " << max;
//		system("pause");
//		return 0;
//}
//Task 5
//{
//			int arr[5];
//			for (int i = 0; i < 5; i++)
//			{
//				cout << "Enter the number: ";
//				cin >> arr[i];
//			}
//			int min = arr[0];
//			for (int  j = 0; j < 5;j++)
//			{
//				if (arr[j] < min)
//				{
//					min = arr[j];
//				}
//			}
//			cout << "\nMaximum Element: " << min << endl;
//			system("pause");
//			return 0;
//
//}
//Task 6
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter the number: ";
//		cin >> arr[i];
//	}
//	int num;
//	cout << "Enter the number you want to display: ";
//	cin >> num;
//	for (int j = 0; j < 5; j++)
//	{
//		if (arr[j] == num)
//		{
//			num = arr[j];
//			cout << "The specific number is " << num << " is in index " << j;
//		}
//	}
//}
//Task 7
//{
//	int arr[5];
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "Enter the number: ";
//			cin >> arr[i];
//		}
//		int num;
//		cout << "Enter the number you want to change ";
//		cin >> num;
//		for (int j = 0; j < 5; j++)
//		{
//			if (arr[j] == num)
//			{
//				num = arr[j];
//				cout << "The specific number is " << num << " is in index " << j;
//				int num2;
//				cout << "\nEnter the number you want to display in array ";
//				cin >> num2;
//				arr[j] = num2;
//				cout << "\nUpdated number is : " << num2;
//
//			}
//		}
//		cout << "\nUpdated number is: ";
//		for (int k = 0; k < 5; k++)
//		{
//			cout << arr[k];
//		}
//		return 0;
//}
//Task 8
//{
//	int arr[5];
//	int oddcount = 0;
//	int evencount = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter the Number: ";
//		cin >> arr[i];
//		if (arr[i] % 2 == 0)
//		{
//			evencount++;
//		}
//		else
//		{
//			oddcount++;
//		}
//	}
//	cout << "Even count numbers are: " << evencount << endl;
//	cout << "Odd count numbers are: " << oddcount;
//}
//Task 9
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter the Number: ";
//		cin >> arr[i];
//	}
//	for (int j = 4; j >= 0; j--)
//	{
//		cout << arr[j]<<" ";
//	}
//	return 0;
//}
Task 10
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize the array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Display the array before swapping
    cout << "Array before swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Swap the first and last elements
    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    // Display the array after swapping
    cout << "Array after swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
Task 11
#include <iostream>
using namespace std;

int main() 
{
    int arr[5];
    int max;
    int s_max;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the element in array ";
        cin>>arr[i];
        if(max<arr[i])
        {
            s_max=max;
            max=arr[i];
        }
    }
    cout<<"Second maximun value is : "<<s_max;
}


				


