// Problem 2: Even Fibonacci Numbers
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include <iostream>
using namespace std;

//function to compute sum of even valued fibonacci sequence numbers up to a cap
void euler_2(long long cap) {
    long long a = 1, b = 2, total = 0; //assign values

    //while a is smaller than the maximum capacity if even add to total
    while (a < cap) {
        if (a % 2 == 0) total += a;
        long long next = a + b;
        a = b;
        b = next; //update the new fibonacci values
    }

    cout << total << endl; //print output once loop is complete
}

int main() {
    euler_2(4000000); //call the function on a cap of 4 million
    return 0;
}
