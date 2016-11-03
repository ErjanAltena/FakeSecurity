#include <sys/ptrace.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int ptrace (enum __ptrace_request __request, ...) {
	printf("Hacked you!\n");
	return 0;
}

char* getenv(const char*name) {
	if(strcmp(name, "LD_PRELOAD") == 0) {
		printf("You realy think you could detect me ?\n");
	}
	return NULL;
}
