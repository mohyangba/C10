#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char code1 = 'A';
  int code2 = 65;// ASCII���� A�� �ش��ϴ� ���ڴ� 65 
  
  printf("code1 = %c, (%d)\n", code1, code1); // A�� �ش��ϴ� ���ڰ� 65���� Ȯ 
  printf("code2 = %c, (%d)\n", code2, code2); // 65�� �ش��ϴ� ���ڰ� A���� Ȯ 
  
  // A�� 65�� mapping ���迡 ���� 
   
  system("PAUSE");	
  return 0;
}
