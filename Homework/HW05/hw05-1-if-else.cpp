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
#include <stdio.h>

int main() {
    char char1, char2, char3, char4;

    printf("Enter 4 characters:\n");
    scanf(" %c %c %c %c", &char1, &char2, &char3, &char4);

    printf("Result: %c %c %c %c\n", char4, char3, char2, char1);

    return 0;
}
