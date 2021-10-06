/*
    Array Rotation- Hackkerank contest solution Team Heavy Coder 8th sept 2021
*/
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >>a[i];
    }
    int temp = a[0];
    for(int i = 0;i < n-1;i++){
        a[i] = a[i+1];  // assigning to left 
    }
    a[n-1] = temp;
    for(int i = 0;i < n;i++){
        cout <<a[i]<<" ";
    }

}

/* Input: 
5
1 2 3 4 5  
Output:
2 3 4 5 1
