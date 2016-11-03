#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ptrace.h>

int main(void) {
	if (ptrace(PTRACE_TRACEME, 0, NULL, 0) == -1) {
  		printf("traced!\n");
		return -1;
	}
	char * secret = calloc(1, 1024);
	sprintf(secret, "This is my secret number %d\n", 42);

	while(1) {
		printf("Guarding the secret....\n");
		sleep(5);
	}
	return 0;

}

