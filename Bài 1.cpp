#include <iostream>

using namespace std;

int count_digits (int number) //khai báo của hàm
{
    int digits = 0;

    while (number != 0)
    {
        number = number / 10;
        digits++; //tăng bộ đếm thêm 1
    }
    return digits;
}

int main ()
{
    cout << "Digits = ";
    cout << count_digits (3213) << endl;
}
