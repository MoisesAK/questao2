#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;
//commit1
   if ((fptr = fopen("exemplo2.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);
//commit22
   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}
