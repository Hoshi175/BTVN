#include <iostream>

using namespace std;

int fibonacci (int n)
{
    if (n == 1)//điều kiện thứ nhất
        return 0;
    if (n == 2)//điều kiện thứ hai
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "So Fibonacci thu " << n << " la: " << fibonacci(n);
    return 0;
}
//Dãy Fibonacci test: 0 1 1 2 3 5 8 13 ...