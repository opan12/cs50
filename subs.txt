#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<cs50.h>
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
   
   int cumle=0;
   for(int i=0;i<strlen(yazi);i++){
   if(yazi[i]="."||yazi[i]="?"||yazi[i]="!")
   cumle++;
    
   }
   printf("%i",cumle);
}
 
 float notlandır;
 notlandır=(588*pow(10,-4)*harf/kelime*100)-(296*pow(10,-3)*cumle/kelime*100)-15.8;
int  index=round(notlandır);
 
 if(index<1){
 printf("1.sınıf");
 else if( index>16)
 printf("16+");
 else 
 printf("%d. grade",index);
     
   
     
 }