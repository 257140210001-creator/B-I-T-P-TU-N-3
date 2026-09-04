#include <iostream>
using namespace std;

// Hàm có tham số mặc định
int tinhTong(int a, int b = 10) {
    return a + b;
}

int main() {
    int a, b;

    // Trường hợp không truyền b
    cout << "Nhap a: ";
    cin >> a;

    cout << "Tong khi khong nhap b: "
         << tinhTong(a) << endl;

    // Trường hợp truyền cả a và b
    cout << "\nNhap lai a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    cout << "Tong khi nhap ca a va b: "
         << tinhTong(a, b) << endl;

    return 0;
}