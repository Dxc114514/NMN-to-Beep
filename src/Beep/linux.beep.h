#include <fcntl.h>
#include <linux/kd.h>
#include <sys/ioctl.h>

#include "beep.argument.h"

int Beep(beep_argument args) {
  int fd = open("/dev/tty10", O_RDONLY);

  return ioctl(fd, KDMKTONE, (atoi(argv.) << 16) + (1193180 / atoi(argv[1])));
}
