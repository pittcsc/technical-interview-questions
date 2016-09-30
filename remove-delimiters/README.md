# Remove Delimiters

## Instructions

Let's say you're running a stock exchange program and the user enters the input: "20,000,000.00", but the program that converts the string to an integer doesn't recognize commas and other delimiters, so you have to write another method that, given a string input and a char delimiter, returns the string in place without the given delimiter. Function's signature: `void remove(char *s, char c)` and if you input "20,000,000.00" with a comma for the char delimiter, the string should transform into "20000000.00".
