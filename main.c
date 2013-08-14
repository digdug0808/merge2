#include "stdio.h"

main() {
	printf("Hello world\n");
	branch();
	hotfix();
}

int hotfix() {
	printf("This is an error. change this later");
}
