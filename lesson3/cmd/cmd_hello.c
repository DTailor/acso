void hello (void) {
  	char *string = "=Not implemented=\0";
	int i = 0;

	while(string[i] != '\0')
		putc(string[i++]);
}