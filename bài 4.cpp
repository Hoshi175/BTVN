#include <iostream>

using namespace std;

void left_rotate ( int arr[], int size )
{
    if ( size <= 1)
        return;     //trong trường hợp mảng rỗng hoặc chỉ có 1 phần tử
    int first = arr[0];     //lưu phần tử đầu
    for ( int i = 0; i <size -1; i++)
    {
        arr[i] = arr[i + 1];    //dịch phần tử còn lại sang 1 vị trí
    }
    arr[size - 1] = first;  //đưa phần tử đầu xuống cuối
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    left_rotate (arr, size);    //hàm xoay trái
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << ",";
    }
    cout << "}";
    return 0;
}