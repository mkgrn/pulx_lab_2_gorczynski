#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main () {
	pid_t child_pid;
	int test = 5;
	printf ("ID procesu glownego wynosi %d\n", (int) getpid ());
	printf ("Wartosc zmiennej test w main: %d\n", test);
	test = 1 ;
	printf ("Wartosc zmiennej test w main po zmianie: %d\n", test);
	int test2 = 6;
	child_pid = fork ();
	if (child_pid != 0) {
		printf ("To jest parent process o id: %d\n", (int)getpid ());
		printf ("To jest child process o id: %d\n", (int) child_pid);
		printf ("Wartosc zmiennej test w if: %d\n", test);
		test = 2;
		printf ("Wartosc zmiennej test w if po zmianie: %d\n", test);
		int test2 = 7;
		sleep(20);
	} else
		printf ("To jest child process o id: %d\n", (int) getpid ());
		printf ("Wartosc zmiennej test2: %d\n", test2);

	return 0;
}
