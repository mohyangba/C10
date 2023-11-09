#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0;
  char str[4];
  
  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  str[3] = '\0';
  
  printf("%s\n", str); 
  
  while ( str[i] != '\0' ) { //현재 문자 str[i]이 맨 끝이 아님을 while문의 조건으로 입력 
          printf("%c", str[i]); // 현재 문자 출력 
          i++; //i를 1 증가 
  }
  
  system("PAUSE");	
  return 0;
}
