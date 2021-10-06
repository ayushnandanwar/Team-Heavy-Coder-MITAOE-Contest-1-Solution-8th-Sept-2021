/*
    Print Pattern - Hackerrank contest solution Team Heavy Coder 8th sept 2021
    5
    1 1 1 1 2 
    1 2 2 2 2 
    3 3 3 3 4 
    3 4 4 4 4 
    5 5 5 5 6 
*/

#include <iostream>
using namespace std;

int main(){
   int N;
    cin >> N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(j==1)
            {   
                if(i%2!=0)
                cout <<i<<" ";
                else cout <<i-1<<" ";
            }
            else if(j==N){
                if (i%2==0)
                cout <<i<<" ";
                else cout <<i+1<<" ";
            }
            else cout<<i<<" ";
        }
        cout<<endl;
    }

}
/*
Input:
5
Output:
1 1 1 1 2 
1 2 2 2 2 
3 3 3 3 4 
3 4 4 4 4 
5 5 5 5 6 
