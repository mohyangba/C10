#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE* fp;
    char c; //한 글자씩 읽어 올 때 쓸 변수 설정  
    // 1. open file 
    fp = fopen("sample.txt", "r"); 
    //fopen("파일이름", "r") 파일을 읽을 것이라는 뜻  
    //안전 장치 설정
    if (fp == NULL)
    {
           printf("failed to open\n");
           return 0;
    } 
   
   //2. read file
   while( (c=fgetc(fp)) != EOF ) // 한 글자 읽은 게 마지막이 아니면 
   {
          putchar(c);// 한 글자 출력
   }
           
   //3. close file
    fp = fclose(fp);
    
  system("PAUSE");	
  return 0;
}
