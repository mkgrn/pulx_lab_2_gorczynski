#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main () {
	pid_t child_pid;
	pid_t child_pid2;
	int test = 5;
	printf ("ID procesu glownego wynosi %d\n", (int) getpid ());
	child_pid = fork();
	if (child_pid != 0) {
			printf ("To jest parent process o id: %d\n", (int)getpid ());
			printf ("To jest child process o id: %d\n", (int) child_pid);
			int test1 = 2;
			printf ("Zmienna test1: %d\n", test1);
			sleep(30);
	}
	child_pid2 = fork();
	if (child_pid2 != 0) {
			printf ("To jest parent process o id: %d\n", (int)getpid ());
			printf ("To jest child process o id: %d\n", (int) child_pid2);
			int test2 = 3;
			printf ("Zmienna test2: %d\n", test2);
			sleep(30);
	}
	printf ("Zmienna test: %d\n", test);
	sleep(30);
	return 0;
}
