#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char src[30] = "happy happy happy"; // 30 ��� ����  

  printf("sring \"%s\" lenght: %i\n", src, strlen(src)); // "�� ����Ʈ �ϰ� �ʹٸ� \"���  
 
 // ���ڿ� ���� = strlen(�Է¹��ڿ�); 
 // src[30]�̶�� �ص� �迭�� ũ�� �� �ƴ� ���� �� �� �� ���ش� 
  system("PAUSE");	
  return 0;
}
