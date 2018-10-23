#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//for close, read, write
#include <unistd.h>

//for open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){

  //Important Flags: O_CREAT O_RDONLY O_WRONLY O_RDWR
  //open function two param: file path, flag (above comment)
  int fd = open("file.txt",O_RDWR | O_CREAT);
  printf("File Descriptor (file.txt): %d\n",fd);

  char * x = "cat";
  int wrote = write(fd,x,strlen(x));
  printf("\nDid it write? %d",wrote);

  char * r = calloc(sizeof(char),strlen(x));
  int red = read(fd,r,strlen(x));
  printf("\nDid it read? %d",red);



  int success = close(fd);
  printf("\nSuccess: %d\n",success);
  return 0;
}
