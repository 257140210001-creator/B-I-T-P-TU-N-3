#include <iostream>
using namespace std;

// Hàm inline tính bình phương của một số
inline int binhPhuong(int x) {
    return x * x;
}

// Hàm inline tính tổng hai số
inline int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, a, b;

    // Nhập số để tính bình phương
    cout << "Nhap x: ";
    cin >> x;

    cout << "Binh phuong cua " << x << " la: "
         << binhPhuong(x) << endl;

    // Nhập hai số để tính tổng
    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    cout << "Tong cua " << a << " va " << b << " la: "
         << tinhTong(a, b) << endl;

    return 0;
}