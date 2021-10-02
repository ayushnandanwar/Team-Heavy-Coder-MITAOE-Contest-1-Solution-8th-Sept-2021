/*
    Sum of Digit- Hackerrank contest solution Team Heavy Coder 8th sept 2021
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    int lastDigit;
    int sum = 0;
    cin >>num;
    while(num > 0){
        lastDigit = num % 10;
        num = num / 10;
        sum += lastDigit;
    }
    cout <<sum;
}