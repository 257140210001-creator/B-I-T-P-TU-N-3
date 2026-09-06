Vị tri khai báo biến 
4.1: khái niệm 

Trong C++, biến không bắt buộc phải khai báo ở đầu khối lệnh. 
Ta có thể khai báo biến ngay tại vị trí cần sử dụng.

Điều này giúp chương trình:
- Dễ đọc và dễ hiểu hơn.
- Biến được khai báo gần nơi sử dụng.
- Dễ kiểm soát phạm vi của biến.
- Hạn chế việc khai báo những biến không cần thiết.

ví dụ
#include <iostream>
using namespace std;
int main() {
    int a = 10;

    cout << a;

    int b = 20;

    cout << b;

    return 0;
}

4.2: khai báo biến trong vòng lặp for 
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << i << " "; //in giá trị của biến i ra màn hình
    }

    return 0;
}

KIỂU CẤU TRÚC - STRUCT
5.1:Khái niệm

struct là kiểu dữ liệu do người lập trình định nghĩa, cho phép gom nhiều dữ 
liệu có thể thuộc các kiểu khác nhau vào cùng một cấu trúc.
ví dụ

struct SinhVien {
    string hoTen;
    int tuoi;
    float diem;
};

Toán tử vi
6.1:Khái niệm

:: được gọi là toán tử phạm vi (Scope Resolution Operator).
pham_vi::ten
