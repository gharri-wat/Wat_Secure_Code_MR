#include <stidio.h>
#include <stdlib.h>
#<include<strings.h>

#define BUFSIZE 256
int main(int argc, char** argv)
{

  if (argc !=2)
  {
      fprintf(stderr, "Pleaseprovide the address of a file as an input.\n");
  }
    return -1;
  }
    char cmd[BUF_SIZE] = "wc -c <");
    strcat(cmd,argv[1];
    system(cmd); 
}
