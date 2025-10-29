// Problem 1: Multiples of 3 or 5
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below a given number.
#include <iostream>
using namespace std;

//function to find sum of numbers below a value that are divisible by 3 or 5
void euler_1(int num) {
    //loop from 0 till num
    int sum = 0;
    for (int i = 0; i < num; i++) {
        //if divisible by 3 or 5 add to sum
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum << endl; //output sum
}

int main() {
    euler_1(1000); //call functon on 1000
    return 0;
}
