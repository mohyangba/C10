#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE* fp;
  char str[100]; // 얼마 들어올지 모르니까 대충 큰 숫자
  int i = 0;
   // 1. open file 
   fp = fopen("sample.txt", "w"); //fopen("파일이름", "w") 파일에 쓰기를 할 것이라는 뜻  
   
   //2. write file

   for(i=0; i<3; i++)
   {
        
   //2-1) print " input a word "
   printf("input a word: ");
   
   //2-2) scanf a string
   scanf("%s", &str);
   
   //2-3) fprintf()
   fprintf(fp, "%s\n", str); // 앞에 포인터로 어느 파일을 열지 알려주기  
   }
   
   //3. close file
    fp = fclose(fp);
    
  system("PAUSE");	
  return 0;
}
