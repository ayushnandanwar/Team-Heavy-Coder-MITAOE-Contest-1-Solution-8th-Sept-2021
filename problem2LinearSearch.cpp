/*
    Linear Search- Hackerrank contest solution Team Heavy Coder 8th sept 2021
*/
#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int key){
    for(int i = 0;i < size;i++){
        if(key == arr[i])
            return i;
     }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i <n;i++){
        cin >> a[i];
    }
    int key;
    cin >> key;
    int pos = linearSearch(a,n,key);
    cout <<pos;
}
/*
Input: 
5
25 68 654 54 64
54
Output:
3
