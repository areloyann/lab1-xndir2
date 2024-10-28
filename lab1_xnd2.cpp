#include <iostream>
#include <cmath> 

int gcd(int a, int b) {
    a = abs(a); 
    b = abs(b); 
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return abs(a * b) / gcd(a, b); 
}

int main() {
    int num1, num2;
    cout << "Nermuceq tvery: ";
    cin >> num1 >> num2;

    int result = lcm(num1, num2);
    cout << "Amenapoqr yndhanur bazmapatiky: " << result << endl;

    return 0;
}
