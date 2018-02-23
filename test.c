#include stdio.c

int main()
{
  int fd = open("output.txt", O_RDWR);
  dup2(fd,1);
  printf("Hello world\n");
  
  return(0);
}
