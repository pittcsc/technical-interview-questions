void remove(char* s, char c) {
	char* out;
	
	if(!s) {
		return;
	}
	
	for(out = s; *s != '\0'; s++) {
		if(*s != c) {
			*out = *s;
			out++;
		}
	}
	
	*out = '\0';
}
