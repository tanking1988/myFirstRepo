#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
 int fd,count;
 char buf[1000];
 fd=open("c.c",O_RDONLY);
 while(count = read(fd,buf,1000))
 {
   write(1,buf,count);
 }
 close(fd);
 return 0;
}
