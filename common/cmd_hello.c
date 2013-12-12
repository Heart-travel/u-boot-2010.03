#include <common.h>
#include <watchdog.h>
#include <command.h>
#include <image.h>
#include <malloc.h>
#include <u-boot/zlib.h>
#include <bzlib.h>
#include <environment.h>
#include <lmb.h>
#include <linux/ctype.h>
#include <asm/byteorder.h>

static void do_hello(void)
{
	printf("hello world!\n");
}

U_BOOT_CMD(
	hello,	CONFIG_SYS_MAXARGS,	1,	do_hello,
	"hello for test!\n",
	"This is the long help for \"hello\" command !\n"
);


