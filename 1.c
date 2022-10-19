//จงเขียนโปรแกรมเพื่อรับข้อมูลเป็น string ไปเรื่อยๆ จนกว่าจะพิมพ์เครื่องหมาย . หลังจากนั้นให้จัดเก็บข้อมูลลงในไฟล์ชื่อ c:\temp\data.txt ดังตัวอย่าง (Level 4)
#include<stdio.h>
#include<string.h>
#define size 1000
int main ()
{
    FILE *fp ;
    fp = fopen("data.txt", "w");
    char str[size] ;
    printf("Input data string: ");
    while(str[0] != '.')
    {
        scanf("%s",str); 
        fprintf(fp,"%s\n",str);
    }
    fclose(fp);
    return 0;
}