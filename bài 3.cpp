#include <iostream>

using namespace std;

double average ( double mark [], int size)
{
    if (size == 0)
    return 0; //tránh chia cho 0

    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += mark[i]; //cộng từng phần tử vào tổng
    }
    return sum / size;    //TB = tổng // số lượng
}
int main()
{
    double mark[] = {22, 10, 3, 17, 5};

    cout << "Trung binh = " << average(mark, 5) << endl;

    return 0;
}
