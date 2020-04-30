#include<stdio.h>

int main() {
	// don't know what is going on here
	// GNU printf docs says, that '\c' determines last character of string to show
	// https://www.gnu.org/software/coreutils/manual/html_node/printf-invocation.html#printf-invocation
	// my compiler (cc/gcc) despite that shows me a warning: unknown escape sequence: '\c'
	// and treats '\c' as just c :<<< dunno...
        printf("Hello\cworld\n");
        return 0;
}

