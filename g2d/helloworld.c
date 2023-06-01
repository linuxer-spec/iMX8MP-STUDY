#include <errno.h>
#include <fcntl.h>
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/time.h>

#include <g2d.h>
#include <g2dExt.h>

//ldconfig -p | grep opencv

int main(int argc, char *argv[])
{
    void *handle = NULL;
    g2d_open(&handle);

    return 0;
}