(i) write data to file

#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
FILE *fp; 
fp=fopen("a.txt","w"); 
if (fp==NULL) 
{ 
printf("error opening file..\n"); 
exit(1); 
} 
else 
{ 
fprintf(fp,"%s","Welcome\n"); 
fprintf(fp,"%s","to file handling in C\n"); 
} 
printf("File Created...named a.txt"); 
fclose(fp); 
} 


(ii) Read data from file and print content on console 
PROGRAM 

#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
FILE *fp; 
char t[100]; 
fp=fopen("a.txt","r"); 
if(fp==NULL) 
{ 
printf("Error opening source file.."); 
exit(1); 
} 
printf("Content of File a.txt\n...................\n"); 
while(fscanf(fp,"%s",t)==1) 
{ 
printf("%s\n",t); 
} 
fclose(fp);
} 
