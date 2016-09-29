void my_remove(char* s, char c) {
	char* out;
	
	// nothing to do given a null pointer
	if(!s) {
		return;
	}
	
	for(out = s; *s != '\0'; s++) {
		// only write out valid characters
		if(*s != c) {
			*out = *s;
			out++;
		}
	}
	
	// terminate string
	*out = '\0';
}
