#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE* fp;
    char c; //�� ���ھ� �о� �� �� �� ���� ����  
    // 1. open file 
    fp = fopen("sample.txt", "r"); 
    //fopen("�����̸�", "r") ������ ���� ���̶�� ��  
    //���� ��ġ ����
    if (fp == NULL)
    {
           printf("failed to open\n");
           return 0;
    } 
   
   //2. read file
   while( (c=fgetc(fp)) != EOF ) // �� ���� ���� �� �������� �ƴϸ� 
   {
          putchar(c);// �� ���� ���
   }
           
   //3. close file
    fp = fclose(fp);
    
  system("PAUSE");	
  return 0;
}
