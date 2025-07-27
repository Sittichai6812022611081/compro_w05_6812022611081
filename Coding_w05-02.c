#include <stdio.h>                                                           // Library for input and output functions

int main() {                                                                 // เริ่มต้นโปรแกรมหลัก
    char name[30];                                                           // ตัวแปรสำหรับเก็บชื่อ ขนาด 30 ตัวอักษร ไม่เกิน 29 ตัวอักษร
    int age;                                                                 // ตัวแปรสำหรับเก็บอายุ
    float tall;                                                              // ตัวแปรสำหรับเก็บส่วนสูง

    char subject;                                                            // ตัวแปรสำหรับเก็บวิชา
    float grade_number;                                                      // ตัวแปรสำหรับเก็บคะแนน
    char grade;                                                              // ตัวแปรสำหรับเก็บเกรด
    
    scanf(" %s %d %f", name, &age, &tall);                                   // รับข้อมูลจากทางแป้นพิมพ์ แล้วเก็บข้อมูลนั้นลงในตัวแปรที่กำหนด ข้อมูลชื่อ อายุ และส่วนสูง
    scanf(" %c %s %f %c", &subject, name, &grade_number, &grade);            // รับข้อมูลจากทางแป้นพิมพ์ แล้วเก็บข้อมูลนั้นลงในตัวแปรที่กำหนด ข้อมูลวิชา ชื่อ คะแนน และเกรด


    printf("Student %s is %d years old and %.1f centimeters tall.\n", name, age, tall);                         //แสดงข้อมูลนักเรียน
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade_number, grade);    //แสดงข้อมูลวิชา ชื่อ คะแนน และเกรด


    return 0;                                                                                                   // จบโปรแกรมหลัก

}

