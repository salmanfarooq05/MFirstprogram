#include <iostream>
using namespace std;
int main()
//Task 1
//{
//    int rows;
//    cout << "Enter the number of Rows: ";
//    cin >> rows;
//
//    for (int i = 1; i <= rows; i++) 
//    {
//        for (int j = 1; j <= rows - i; j++)
//        {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++)
//        {
//            if (k== 1 || k == 2 * i - 1 || i == rows)
//            {
//                cout << "*";
//            }
//            else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    system("pause");
//    return 0;
//}

//Task 2
//{
//        int rows ;
//        cout << "Enter the number of rows: ";
//        cin >> rows;
//
//        for (int i = 1; i <= rows; i++) 
//        {
//            for (int j = 1; j <= rows - i; j++) {
//                cout << " ";
//            }
//            for (int j = 1; j <= 2 * i - 1; j++) {
//                cout << "*";
//            }
//            cout << endl;
//        }
//        system("pause");
//        return 0;
//}

//Task 3
//{
//    int rows;
//    cout << "Enter the number od rows: ";
//    cin >> rows;
//
//    for (int i= 1;i <= rows;i++)
//    {
//        for (int j= 1;j <= rows;j++) 
//        {
//            if (i== 1 || i == rows || j == 1 || j == rows)
//            {
//                if ((i == 1 && (j == 1 || j == rows)) || (i == rows && (j == rows || j == 1))) 
//                {
//
//                    cout << "  ";
//                }
//                else 
//                {
//                    cout << "* ";
//                }
//            }
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//    system("pause");
//    return 0;
//}
//Task 4
//{
//
//    int rows;
//    cout << "Enter the number of rows: ";
//    cin >> rows;
//
//    for (int i = 1;i <= rows;i++)
//    {
//        for (int j = 1;j <= rows;j++)
//        {
//            int ch1andl = ((i == 1 || i == rows) && (j == 1 || j == rows));
//            if (ch1andl) cout << "  ";
//            else cout << "* ";
//        }
//        cout << endl;
//    }
//    system("pause");
//    return 0;
//}
//Task 5
//{
//
//    int n = 5;
//
//    for (int rows = 1;rows <= n;rows++) 
//    {
//        for (int cols = 1;cols <= n;cols++)
//        {
//            if (rows == 1 || rows == n || cols == 1 || cols == n)
//            {
//                cout << "* ";
//            }
//            else 
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//    system("pause");
//    return 0;
//}

//Task 6
//{
//	int rows;
//	cout << "Enter the number of rows: ";
//	cin >> rows;
//	for (int i = 1;i <= rows;i++)
//	{
//		for (int j = 1;j <= rows;j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

//Task 7
//{
//    int n = 5;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n - i; j++)
//        {
//            cout << " ";
//        }
//        for (int j = 1; j <= 2 * i - 1; j++)
//        {
//            if (j == 1 || j == 2 * i - 1)
//            {
//                cout << "*";
//            }
//            else
//            {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    for (int i = n - 1; i >= 1; i--)
//    {
//        for (int j = 1; j <= n - i; j++)
//        {
//            cout << " ";
//        }
//        for (int j = 1; j <= 2 * i - 1; j++)
//        {
//            if (j == 1 || j == 2 * i - 1)
//            {
//                cout << "*";
//            }
//            else
//            {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}
//Task 8
//{
//    int rows;
//
//    cout << "Enter the number of rows for the pyramid: ";
//    cin >> rows;
//
//    for (int i = 1; i <= rows; i++)
//    {
//        for (int j = 1; j <= rows - i; j++)
//        {
//            cout << " ";
//        }
//        for (int k = 1; k <= (2 * i - 1); k++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    for (int i = rows; i >= 1; i--)
//    {
//        for (int j = 1; j <= rows - i; j++)
//        {
//            cout << " ";
//        }
//        for (int k = 1; k <= (2 * i - 1); k++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    system("pause");
//    return 0;
//}
//Task 9 (a)
//{
//		int rows;
//		cout << "Enter the Rows: ";
//		cin >> rows;
//		for (int i = 1; i <= rows; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				cout << "*";
//			}
//			cout << endl;
//		}
//}
//Task 9 (b)
//{
//        int rows;
//        cout << "Enter the number of rows for the pyramid: ";
//        cin >> rows;
//
//        for (int i = 1; i <= rows; i++)
//        {
//            for (int j = 1; j <= rows - i; j++)
//            {
//                cout << " ";
//            }
//            for (int k = 1; k <= (2 * i - 1); k++)
//            {
//                cout << "*";
//            }
//            cout << endl;
//        }
//}
//Task 10 (a)
//{
//        int rows;
//        cout << "Enter the number of rows for the pyramid: ";
//        cin >> rows;
//
//        for (int i = rows; i >= 1; i--)
//        {
//            for (int j = 1; j <= rows; j++)
//            {
//                cout << " ";
//            }
//            for (int k = 1; k <= i; k++)
//            {
//                cout << "*";
//            }
//            cout << endl;
//        }
//}
//Task 10 (b)
//{
//        int rows;
//        cout << "Enter the number of rows for the pyramid: ";
//        cin >> rows;
//
//        for (int i = rows; i >= 1; i--)
//        {
//            for (int j = 1; j <= rows - i; j++)
//            {
//                cout << " ";
//            }
//            for (int k = 1; k <= (2 * i - 1); k++)
//            {
//                cout << "*";
//            }
//            cout << endl;
//        }
//}
//Task 11 (a)
//{
//		int rows;
//		cout << "Enter the Rows: ";
//		cin >> rows;
//		for (int i = 1; i <= rows; i++)
//		{
//			int count = 1;
//			for (int j = 1; j <= i; j++)
//			{
//				cout <<count;
//				count++;
//			}
//			cout << endl;
//		}
//}
//Task 11 (b)
//{
//        int rows;
//        cout << "Enter the number of rows for the pyramid: ";
//        cin >> rows;
//
//        for (int i = rows; i >= 1; i--)
//        {
//            int count = 1;
//            for (int j = 1; j <= rows; j++)
//            {
//                cout << " ";
//            }
//            for (int k = 1; k <= i; k++)
//            {
//                cout << count;
//                count++;
//            }
//            cout << endl;
//        }
//}
//Task 12
//{
//        int rows;
//        cout << "Enter the number of rows for the pyramid: ";
//        cin >> rows;
//
//        for (int i = rows; i >= 1; i--)
//        {
//            
//            for (int j = i; j >= 1; j--)
//            {
//                cout <<j<<" ";
//            }
//            for (int k = 1; k <= rows - i; k++)
//            {
//                cout << " ";
//              
//            }
//            cout << endl;
//        }
//}
//Task 13 (a)
//{
//		int rows;
//		cout << "Enter the Rows: ";
//		cin >> rows;
//		int h = 1;
//		for (int i = 1; i <= rows; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				cout <<h<<" ";
//			}
//			h++;
//			cout << endl;
//		}
//		return 0;
//}
//Task 13 (b)
//{
//	int rows;
//	cout << "Enter the Rows: ";
//	cin >> rows;
//	int h = rows;
//	for (int i = rows; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << h << " ";
//		}
//		h--;
//		cout << endl;
//	}
//	return 0;
//}


