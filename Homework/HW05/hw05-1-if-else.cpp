/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter characters: ";
    std::string input;
    std::cin >> input;

    if (input.length() != 4) {
        std::cout << "Please enter characters\n";
        return 1;
    }

    std::cout << "ผลลัพธ์: ";
    for (int i = input.length() - 1; i >= 0; i--) {
        std::cout << input[i] << " ";
    }
    
    return 0;
}
