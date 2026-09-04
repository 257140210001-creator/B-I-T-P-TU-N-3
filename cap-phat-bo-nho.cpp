#include <iostream>
using namespace std;

int main() {
    // Cấp phát bộ nhớ động cho một biến int
    int* p = new int;

    // Gán giá trị cho vùng nhớ
    *p = 100;

    cout << "Gia tri cua bien: " << *p << endl;

    // Giải phóng bộ nhớ
    delete p;
    p = nullptr;

    // Cấp phát bộ nhớ động cho một mảng 5 phần tử
    int* arr = new int[5];

    // Nhập dữ liệu cho mảng
    cout << "Nhap 5 phan tu cua mang:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Xuất mảng
    cout << "Mang vua nhap: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Giải phóng bộ nhớ của mảng
    delete[] arr;
    arr = nullptr;

    return 0;
}