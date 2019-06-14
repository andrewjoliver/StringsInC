#include <stdio.h>
#include <stdlib.h>
int main()
{
   char var1[3] = "Hi";
   char var2[3] = {'H', 'i', '\0'};
   char *var3;
   var3 = (char*) malloc(sizeof (char) * 3);
   *(var3+0) = 'H';
   *(var3+1) = 'i';
   *(var3+2) = '\0';

   printf("%s", var1);
   printf("%s", var2);
   printf("%s", var3);
   
   return 0;
}