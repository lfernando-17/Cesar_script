#include <stdio.h>
#include <string.h>
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';
#define TAM 500
int main() {

char str[TAM],resp;
int num,num2;
printf("Digite uma string : ");
gets(str);
printf("Digite o número :");
scanf("%d",&num);
int tam=strlen(str);

for (int i=0;i<tam;i++)
{
  str[i]=str[i]+num;
}
puts(str);

printf("Deseja inverter ? ");
scanf(" %c",&resp);
if (resp=='s')
{
  for (int i=0;i<tam;i++)
  {
    str[i]=str[i]-num;
  }
  printf("%s",str);
}

   return (0);
}
