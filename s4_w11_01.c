#include <stdio.h>

// ฟังก์ชันแบบ Parameter + No Return
void inputAndShow(int math, int physics, int chemistry) {
    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n",
           math, physics, chemistry);
}

int main() {
    int math, physics, chemistry;

    printf("Enter Math: ");
    scanf("%d", &math);

    printf("Enter Physics: ");
    scanf("%d", &physics);

    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชัน
    inputAndShow(math, physics, chemistry);

    return 0;
}