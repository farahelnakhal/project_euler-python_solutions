#include <iostream>
using namespace std;

void euler_1(int num) {
    int sum = 0;
    for (int i = 0; i < num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
}

int main() {
    euler_1(1000);
    return 0;
}
