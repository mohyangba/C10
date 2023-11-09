#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char code1 = 'A';
  int code2 = 65;// ASCII에서 A에 해당하는 숫자는 65 
  
  printf("code1 = %c, (%d)\n", code1, code1); // A에 해당하는 숫자가 65임을 확 
  printf("code2 = %c, (%d)\n", code2, code2); // 65에 해당하는 문자가 A임을 확 
  
  // A와 65가 mapping 관계에 있음 
   
  system("PAUSE");	
  return 0;
}
