#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char alfabe[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    char yenialf[26];
    printf("sifreyi gir:");
    scanf("%s",&yenialf);


    if(strlen(yenialf)!=26)
    {
      printf("key must be 26 characters!\n");
      return 0;
    }
      
    for(int i=0;i<=strlen(yenialf);i++)   
    {
      if(((yenialf[i]<'a' && yenialf[i]>'z') || (yenialf[i]<'A' && yenialf[i]>'Z')))
         {
            printf("Key must contain only letters.\n");
            return 0;
         } 
      else if(yenialf[i]>='a' && yenialf[i]<='z')
        yenialf[i]=toupper(yenialf[i]);
    }

    char metin[100];
    printf("metin:");
    scanf("%s",&metin);

    char sifre[100];

   for(int i=0;metin[i]!='\0';i++)
   {
      if(isupper(metin[i])!=0)
      {
         for(int j=0;j<26;j++)
         {
            if(metin[i]==alfabe[j])
            {
               sifre[i]=yenialf[j];
              break;
            }
         }   
      }
      else if(islower(metin[i]!=0))
      {
         for(int j=0;j<26;j++)
         {
            if(metin[i]==tolower(alfabe[j]))
            {
               sifre[i]=tolower(yenialf[j]);
               break;
            }
         }
      }
      else 
      {
         metin[i]=sifre[i];
      } 
   }
   printf("sifre:%s\n",sifre);
   return 0;
}
