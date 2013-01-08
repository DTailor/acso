#include "bloader.h"

void kern_main();



void _start(int memSize, char *parms, struct boot_dir *loadedfiles)
{
	kern_main();

	asm("cli");
	asm("hlt");
}

void kern_main()
{
	char *vidmem = (char *) 0xb8000;
	
	/* "Hello " */
	vidmem[0] = 'H';
	vidmem[1] = 0x7;
	vidmem[2] = 'e';
	vidmem[3] = 0x7;
	vidmem[4] = 'l';
	vidmem[5] = 0x7;
	vidmem[6] = 'l';
	vidmem[7] = 0x7;
	vidmem[8] = 'o';
	vidmem[9] = 0x7;
	vidmem[10] = ' ';
	vidmem[11] = 0x7;

	/* "World " */
	vidmem[12] = 'W';
	vidmem[13] = 0xA;
	vidmem[14] = 'o';
	vidmem[15] = 0xA;
	vidmem[16] = 'r';
	vidmem[17] = 0xA;
	vidmem[18] = 'l';
	vidmem[19] = 0xA;
	vidmem[20] = 'd';
	vidmem[21] = 0x7;
	vidmem[22] = ' ';
	vidmem[23] = 0x7;

	/* "OS" */
	vidmem[24] = 'O';
	vidmem[25] = 0x7;
	vidmem[26] = 'S';
	vidmem[27] = 0x7;
}
