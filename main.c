#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char src[] = "The worst thingss to eat before you sleep";
  char dst[100];
  
  // ���� ��� ���ڿ� = strcpy(���, ����); 
  
  strcpy(dst, src);
  printf("copied string: %s\n", dst); 
 
  system("PAUSE");	
  return 0;
}
