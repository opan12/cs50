#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void) 
{
     string yazi=get_string("yaziyi giriniz:  ");
     printf("%s\n",yazi);
     
     int harf=0;
     for(int i=0;i<strlen(yazi);i++)
     {
         if((yazi[i]>='a' && yazi[i]<='z')||yazi[i]>='A' && yazi[i]<='Z'))
         harf++;
     }
     printf("%i harf\n",harf);
        
    int kelime=1;
    for(int i=0;i<strlen(yazi);i++)
    {

    if(yazi[i]=" ")
    kelime++;

    }
   printf("%d",kelime);
   
   int (index<1)
   printf()

        
}
#include<stdio.h>
int main(){
    int oykisi,adaykisi;
    printf("oy al");
    scanf("%d",&oykisi);
    printf("aday al");
    scanf("%d",&adaykisi);

 for(int i=1;i<=oykisi;i++){

for(int j=1;j<=adaykisi;j++){
    printf("%d.aday:%d\n",j);

}
 printf("\n");
 }

if(oy[i][j]>oy[j][i])

}



#include<stdio.h>
#include<stdlib.h>


int main()
{
long long num1;
    printf("kart nosu gir:");
    scanf("%lld",&num1);
    int toplam=0;
    long long num2=num1;
    long long number=num1;

    do
    {
        int a=num1%100;
        int b=a/10;

        if(a>5)
        {
            int s=2*b;
            int t=(s%10)+(s/10);
            toplam+=t;
        }
        else
        {
            int t2=2*b;
            toplam+=t2;
        }
        num1=num1/100;

    }
    while(num1>9);

    do
    {

        int b=num2%10;
        num2=num2/100;
        toplam+=b;

    }
    while (num2>0);


    printf("toplam:%d",toplam);

    if(toplam % 10==0)
    {
    if ((number>=34*pow(10,13)&&number<=35*pow(10,13))||(number>=37*pow(10,13)&&number<=38*pow(10,13)))
        printf("amex");
    else if((number>=51*pow(10,14))&&(number<=56*pow(10,14)))
        printf("master");
    else if((number>=4*pow(10,12)&&number<=5*pow(10,12))||(number>=4*pow(10,15)&&number<=5*pow(10,15)))
        printf("visa");
    else
        printf("invalid");
    }

}
