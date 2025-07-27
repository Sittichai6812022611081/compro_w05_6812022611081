#include <stdio.h>                               // Library for input and output functions

int main() {                                     // ฟังก์ชันหลักของโปรแกรม
    
// ประกาศตัวแปรสำหรับเก็บข้อมูลของแต่ละคน
    char name1;                                  // ชื่อคนที่1
    int age1;                                    // อายุคนที่1
    float height1;                               // ส่วนสูงคนที่1
    float weight1;                               // น้ำหนักคนที่1
    char grade_code1;                            // เกรดคนที่1

    char name2;                                  // ชื่อคนที่2
    int age2;                                    // อายุคนที่2
    float height2;                               // ส่วนสูงคนที่2
    float weight2;                               // น้ำหนักคนที่2
    char grade_code2;                            // เกรดคนที่2

    char name3;                                  // ชื่อคนที่3
    int age3;                                    // อายุคนที่3
    float height3;                               // ส่วนสูงคนที่3
    float weight3;                               // น้ำหนักคนที่3
    char grade_code3;                            // เกรดคนที่3

   
    printf("Enter data for 3 people:\n");        // ข้อความแจ้งให้ผู้ใช้ป้อนข้อมูลสำหรับ 3 คน
    printf("Example: x*19*180.5*75.6*A\n");      // ตัวอย่างรูปแบบการป้อนข้อมูล: ชื่อ*อายุ*ส่วนสูง*น้ำหนัก*เกรด

    // รับข้อมูล
    printf("Person 1: ");
    scanf(" %c*%d*%f*%f*%c", &name1, &age1, &height1, &weight1, &grade_code1);     // พิมพ์ข้อมูล ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่1

    printf("Person 2: ");
    scanf(" %c*%d*%f*%f*%c", &name2, &age2, &height2, &weight2, &grade_code2);      // พิมพ์ข้อมูล ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่2

    printf("Person 3: ");
    scanf(" %c*%d*%f*%f*%c", &name3, &age3, &height3, &weight3, &grade_code3);      // พิมพ์ข้อมูล ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่3

   
  
    printf("+-------+-----+------------+------------+------------+\n");     // แสดงเส้นแบ่งตาราง
    
    printf("| %-5s | %-3s | %-8s | %-8s | %-10s |\n", "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");     // แสดงหัวตาราง ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด
   
    printf("+-------+-----+------------+------------+------------+\n");     // แสดงเส้นแบ่งตาราง


    printf("| %-5c | %3d | %9.1f  | %9.1f  | %10c |\n", name1, age1, height1, weight1, grade_code1);    // แสดงผล ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่1
    printf("| %-5c | %3d | %9.1f  | %9.1f  | %10c |\n", name2, age2, height2, weight2, grade_code2);    // แสดงผล ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่2
    printf("| %-5c | %3d | %9.1f  | %9.1f  | %10c |\n", name3, age3, height3, weight3, grade_code3);    // แสดงผล ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่3
    
    printf("+-------+-----+------------+------------+------------+\n");     // แสดงเส้นแบ่งตาราง

    return 0;       // จบโปรแกรมหลัก
}