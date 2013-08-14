#include "math.h"
#include "error.h"

main() {
	printf("Hello world\n");
	branch();
	hotfix();
	newfn();
}

int hotfix() {
	int i;
	i = 2;
	printf("Hotfix #: %d fixed\n", i);
}

int newfun() {
	printf("its more fun in the philippines\n");
}
