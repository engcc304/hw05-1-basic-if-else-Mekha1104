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
    char input1, input2, input3, input4;

    std::cout << "Please enter characters: ";
    std::cin >> input1 >> input2 >> input3 >> input4;

    std::cout << "Result: ";

    if (input1 >= input2 && input1 >= input3 && input1 >= input4) {
        std::cout << input1 << " ";
        if (input2 >= input3 && input2 >= input4) {
            std::cout << input2 << " ";
            if (input3 >= input4) {
                std::cout << input3 << " " << input4;
            } else {
                std::cout << input4 << " " << input3;
            }
        } else if (input3 >= input2 && input3 >= input4) {
            std::cout << input3 << " ";
            if (input2 >= input4) {
                std::cout << input2 << " " << input4;
            } else {
                std::cout << input4 << " " << input2;
            }
        } else {
            std::cout << input4 << " ";
            if (input2 >= input3) {
                std::cout << input2 << " " << input3;
            } else {
                std::cout << input3 << " " << input2;
            }
        }
    } else if (input2 >= input1 && input2 >= input3 && input2 >= input4) {
        std::cout << input2 << " ";
        if (input1 >= input3 && input1 >= input4) {
            std::cout << input1 << " ";
            if (input3 >= input4) {
                std::cout << input3 << " " << input4;
            } else {
                std::cout << input4 << " " << input3;
            }
        } else if (input3 >= input1 && input3 >= input4) {
            std::cout << input3 << " ";
            if (input1 >= input4) {
                std::cout << input1 << " " << input4;
            } else {
                std::cout << input4 << " " << input1;
            }
        } else {
            std::cout << input4 << " ";
            if (input1 >= input3) {
                std::cout << input1 << " " << input3;
            } else {
                std::cout << input3 << " " << input1;
            }
        }
    } else if (input3 >= input1 && input3 >= input2 && input3 >= input4) {
        std::cout << input3 << " ";
        if (input1 >= input2 && input1 >= input4) {
            std::cout << input1 << " ";
            if (input2 >= input4) {
                std::cout << input2 << " " << input4;
            } else {
                std::cout << input4 << " " << input2;
            }
        } else if (input2 >= input1 && input2 >= input4) {
            std::cout << input2 << " ";
            if (input1 >= input4) {
                std::cout << input1 << " " << input4;
            } else {
                std::cout << input4 << " " << input1;
            }
        } else {
            std::cout << input4 << " ";
            if (input1 >= input2) {
                std::cout << input1 << " " << input2;
            } else {
                std::cout << input2 << " " << input1;
            }
        }
    } else {
        std::cout << input4 << " ";
        if (input1 >= input2 && input1 >= input3) {
            std::cout << input1 << " ";
            if (input2 >= input3) {
                std::cout << input2 << " " << input3;
            } else {
                std::cout << input3 << " " << input2;
            }
        } else if (input2 >= input1 && input2 >= input3) {
            std::cout << input2 << " ";
            if (input1 >= input3) {
                std::cout << input1 << " " << input3;
            } else {
                std::cout << input3 << " " << input1;
            }
        } else {
            std::cout << input3 << " ";
            if (input1 >= input2) {
                std::cout << input1 << " " << input2;
            } else {
                std::cout << input2 << " " << input1;
            }
        }
    }

    return 0;
}
