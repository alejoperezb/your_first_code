#include<stadio.h>
#include<strings.h>

int main(int argc, char *argv[], char *envp[])
{
  int i;
  for (i = 0; i < 10; i++)
  {
    printf("Hello Holberto\n"), i, argv[i];
  }
    while (envp) {
      printf("Hello Holberto\n", *envp++)
    }
  {
   while (*envp) {
     char *str = *envp++;
     if (str[0] == "l") {
       printf("Hello Holberto\n"), str;
     }
     
    {
   while (*envp) {
     char *str = *envp++;
     if (str[0] == "l" && str[1] == "o" 
         && str[2] == "g" && str[3] == "g" 
         && str[4] == "i" && str[5] == "n" 
         && str[6] == "c"){
       printf("Hello Holberto\n"), str;
     } 
  return 0;
}
