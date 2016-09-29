void remove(char* s, char c) {
	char* out = s;
	while(*s != '\0') {
		if(*s != c) {
			*out = *s;
			out++;
		}
		s++;
	}
	*out = '\0';
}