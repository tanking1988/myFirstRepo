#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(int argc,char* argv[]) 
{
 int i,fd,count;
 char buf[1000];
 for(i =1 ; i < argc ;i++)
 {
    printf ("the %dth file: %s\n",i,argv[i]);
    fd=open(argv[i],O_RDONLY);
    while(count = read(fd,buf,1000))
    {
       write(1,buf,count);
    }
    close(fd);
    if(i<argc-1)
    printf("\n\nnext file!\n");
  }
 return 0;
}
