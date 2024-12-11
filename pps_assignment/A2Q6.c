#include<stdio.h>
int main()
{
    int id;
    char name[108];
    float unit,charge,totalbill,surcharge;
    printf("Enter the customer id:");
    scanf("%d",&id);
    printf("Enter the name of the customer (please use underscore while entering the name for e.g, XYZ_XYZ_XYZ):");
    scanf("%s",&name);
    printf("Enter the unit consumed by the customer:");
    scanf("%f",&unit);
    if (unit<=199)
    {
        charge=unit*1.2;
    }
    else if (unit>=200 && unit<400)
    {
        charge=unit*1.5;
    }
    else if (unit>=400 && unit<600)
    {
        charge=unit*1.8;
    }
    else if (unit>=600)
    {
        charge=unit*2;
    }
    totalbill=charge;
    if (totalbill>400)
    {
        surcharge=totalbill*0.15;
    }
    if(totalbill<100)
    {
        totalbill=100;
    }
    printf("Customer ID:%d\n",id);
    printf("Customer Name:%s\n",name);
    printf("Unit Consumed:%.2f\n",unit);
    printf("Amount Charges:%.2f\n",charge);
    printf("Surcharge Amount:%.2f\n",surcharge);
}