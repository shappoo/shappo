#include <iostream>

using namespace std;
int main ()
    setlocale(0, "");
    int arr[3];
    for(int i = 0; i < 3; i++) {
        cin>>arr[i];
    }
    if(arr[0] == arr[2]){
        cout<<"строка палиндром";
    }else{
        cout<<"строка не палиндром";
    }
    return 0;
    }