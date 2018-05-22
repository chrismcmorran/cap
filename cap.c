#include <stdio.h>
#include <sys/statvfs.h>
#include <stdlib.h>

int main()
{
  // struct containing information about the file system.
  struct statvfs buffer;
  statvfs("/", &buffer);

  // calculate available space
  float total = buffer.f_blocks;
  float free = buffer.f_bfree;
  float capacity = 100 - ((free/total) * 100);

  
  printf("Capacity: %.2f%%\n", capacity);
  return 0;
}
