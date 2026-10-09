//This is a program for solving or restoring the Chinese ring puzzle：
#include <iostream>
using namespace std;

void up(int n);

void down(int n)
{
    if (n==1)
    {
        cout << "1 down" << endl;
    }

    else if (n==2)
   {
       cout << "1,2 down" << endl;
   }
   else
   {
       down(n - 2);
       cout << n << " down" << endl;
       up(n - 2);
       down(n - 1);
   }
}

void up(int n)
{
   if (n==1)
   {
       cout << "1 up" << endl;
   }
   else if (n==2)
   {
       cout << "1,2 up" << endl;
   }
   else
   {
       up(n - 1);
       down(n - 2);
       cout << n << " up" << endl;
       up(n - 2);
   }
}



int main()
{
   cout << "This is a program for solving or restoring the Chinese ring puzzle." << endl;
   cout << "Please enter 1 for solving or 2 for restoring." << endl;
   int a, x;
   cin >> a;
   if (a==1)
   {
       cout << "How many rings do you wan't to solve?" << endl;
       cin >> x;
       down(x);
       cout << "Congratulations on solving the puzzle!" << endl;
   }
   else if (a == 2)
   {
       cout << "How many rings do you wan't to restore?" << endl;
       cin >> x;
       up(x);
       cout << "Congratulations on restoring the puzzle!" << endl;
   }
	system("pause");
   return 0;
}