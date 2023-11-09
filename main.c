#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char src[] = "The worst thingss to eat before you sleep";
  char dst[100];
  
  // 복사 대상 문자열 = strcpy(대상, 원본); 
  
  strcpy(dst, src);
  printf("copied string: %s\n", dst); 
 
  system("PAUSE");	
  return 0;
}
