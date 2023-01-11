#include <stdio.h>
#include <stdlib.h>

int main(){
int sayi,height,i,j;

do
{
printf("sayi giriniz");
scanf("%d",&height);
}
while(height<1&&height>8);

for(i=1;i<=height;i++){
    for(j=1;j<=height-i;j++)
    {
        printf(" ");

    }
for(j=1;j<=i;j++)
{
    printf("#");
}

for(j=1;j<=2;j++){
    printf(" ");
}

for(j=1;j<=i;j++)
{
    printf("#");
}
printf("\n");
}


}

