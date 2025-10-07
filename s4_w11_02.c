#include <stdio.h>

// ฟังก์ชันแบบ Parameter + Return
float average(int a, int b, int c) {
    return (a + b + c) / 3.0; // แบ่งด้วย 3.0 เพื่อให้ได้ผลลัพธ์เป็น float
}

int main() {
    int math, physics, chemistry;
    float avg;

    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชันและเก็บค่าเฉลี่ย
    avg = average(math, physics, chemistry);

    // แสดงผล
    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg);

    return 0;
}