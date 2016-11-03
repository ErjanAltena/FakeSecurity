#include <sys/ptrace.h>
#include <stdio.h>

long int ptrace (enum __ptrace_request __request, ...) {
	printf("Hacked you!\n");
	return 0;
}
