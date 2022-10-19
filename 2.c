#include<stdio.h>
#define size 1000
int main ()
{
    char str[size];
    bool event = 0 ;
    FILE *fp;
    fp = fopen("data.txt","w");
    printf("Input data string: ");
    while(event == 0)
    {
    if(str[0] != '.')
    {
       scanf("%s",str);
       fprintf(fp,"%s\n",str);
    }
    else if (str[0] == '.')
    {
        event = 1;
    }
    }
    fclose(fp);
    return 0;
}
