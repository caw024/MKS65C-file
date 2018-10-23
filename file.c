#include <stdlib.h>
#include <stdio.h>

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

  char * x = "c";
  int wrote = write(fd,x,sizeof(char));
  printf("\nDid it write? %d",wrote);

  int red = read(fd,x,sizeof(char));
  printf("\nDid it read? %d",red);



  int success = close(fd);
  printf("\nSuccess: %d\n",success);
  return 0;
}
