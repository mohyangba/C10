#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char src[30] = "happy happy happy"; // 30 없어도 가능  

  printf("sring \"%s\" lenght: %i\n", src, strlen(src)); // "를 프린트 하고 싶다면 \"사용  
 
 // 문자열 길이 = strlen(입력문자열); 
 // src[30]이라고 해도 배열의 크기 가 아닌 문자 의 수 를 세준다 
  system("PAUSE");	
  return 0;
}
