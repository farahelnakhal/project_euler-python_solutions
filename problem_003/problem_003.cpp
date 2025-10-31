// Problem 3: Largest Prime Factor
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?
#include <iostream>
using namespace std;

//function to find the largest prime factor of a number
void euler_3(long long num) {
    long long factor = 2;

    //keep dividing out factors until factor^2 > num
    while (factor * factor <= num) {
        if (num % factor == 0) {
            num /= factor; //divide out this prime factor completely
        } else {
            factor += 1; //try next potential factor
        }
    }

    cout << num << endl; //remaining num is the largest prime factor
}

int main() {
    euler_3(600851475143); //call the function for value requested
    return 0;
}
