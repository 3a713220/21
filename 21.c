#include <stdio.h> 

#include <stdlib.h>

struct servitor

{
    char id[8],name[12];
    int hourly_pay,hours,payment;

};
void calc(struct servitor *);
int main(void)
{
    struct servitor emp; 
    printf("請輸入編號,姓名,時薪,工作時數: ");
    scanf(" %s %s %d %d", emp.id, emp.name, &emp.hourly_pay, &emp.hours);
    calc(&emp);
    printf("月收入: %d\n", emp.payment);
    system("pause"); 
    return 0;
}
void calc(struct servitor *p)
{
    p->payment=p->hourly_pay*p->hours;
}
