#include <stdio.h>
#include <stdlib.h>

int main(void)
{


   char color[20];
   char verb[20];
   char crushL[20];
   char crushLL[20];

   printf("Enter a color name: \n");
   scanf("%s" , color);
   printf("Enter a verb: \n");
   scanf("%s" , verb);
   printf("Enter your crush name: \n");
   scanf("%s%s" , crushL , crushLL);
   printf("Roses are %s\n" , color);
   printf("%s are Blue\n" , verb);
   printf("I love %s %s\n" , crushL , crushLL);
   

  
return 0;
}
