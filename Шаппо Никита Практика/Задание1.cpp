#include <iostream>
#include <math.h>
using namespace std;
int main() 
{

setlocale(0, "");
int num;
cout << "введите число: ";
cin>>num;
for(int i = 2; i<=sqrt(num); i++)
{
    if(num%i==0){
      cout<<"число не простое";
      return 0;
    }
}
cout<<"число простое";
return 0;
}