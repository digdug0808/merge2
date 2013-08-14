#include "math.h"
#include "error.h"

main() {
	printf("Hello world\n");
	branch();
	hotfix();
}

int hotfix() {
	int i;
	i = 2;
	printf("Hotfix #: %d fixed\n", i);
}
