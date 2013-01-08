void hello (void) {
  	char *response = "hello";
	int i = 0;

	while(response[i] != 'o')
		putc(response[i++]);
}