// bytes-on-disk Example
// Mission: Create 30,439,314 bytes on disk.

#include <stdio.h> 
#include <string.h>

int main()
{
   FILE *fileAddress;
   fileAddress = fopen("sample.txt", "w");
   char name = "T";
   int i;
   int len = strlen(name);

   if (fileAddress != NULL) {
       int count = 0;
       while (count < 30439314) {
            for (i = 0; i < len; i++) {
                printf("Character we are writing to the File = %c \n", name[i]);
            // Let us use our fputc
            fputc (name[i], fileAddress);
            }
       }
	printf("\n We have written the Name successfully");
	fclose(fileAddress);		
   }
   else {
  	  printf("\n Unable to Create or Open the Sample.txt File");
   }
   return 0;
}
