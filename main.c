#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE* fp;
  char str[100]; // �� ������ �𸣴ϱ� ���� ū ����
  int i = 0;
   // 1. open file 
   fp = fopen("sample.txt", "w"); //fopen("�����̸�", "w") ���Ͽ� ���⸦ �� ���̶�� ��  
   
   //2. write file

   for(i=0; i<3; i++)
   {
        
   //2-1) print " input a word "
   printf("input a word: ");
   
   //2-2) scanf a string
   scanf("%s", &str);
   
   //2-3) fprintf()
   fprintf(fp, "%s\n", str); // �տ� �����ͷ� ��� ������ ���� �˷��ֱ�  
   }
   
   //3. close file
    fp = fclose(fp);
    
  system("PAUSE");	
  return 0;
}
