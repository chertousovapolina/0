// Чертоусова дз Задача 0

#include <iostream>
using namespace std;
int main()
{
    
    int a;
    const int size = 100;
     int n=100;
     int mass[size];;
     for (int i = 0; i != n; i++)
     {
         cin >> mass[i];

         if (mass[i] % 2 == 0) {
             cout <<mass[i]<< " " ;
         }
     }
}


