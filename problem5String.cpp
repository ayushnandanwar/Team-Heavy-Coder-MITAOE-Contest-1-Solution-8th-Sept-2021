/*
    String - Hackerrank contest solution Team Heavy Coder 8th sept 2021
*/

#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i = 0;i<s.length();i+=2){
        if( s[i] >= 'a' && s[i] <= 'z' ){
            s[i] -= 32; 
        }
    }
    for(int i = 1;i<s.length();i+=2){
        if( s[i] >= 'A' && s[i] <= 'Z' ){
            s[i] += 32; 
        }
    }
    cout <<s;
}
/*
Input:
Mitaoe
Output:
MiTaOe
