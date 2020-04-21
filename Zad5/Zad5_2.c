#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
int main () {
	printf ("ID procesu glownego wynosi %d\n", (int) getpid ());
	int test=5;
	printf ("Wartosc zmiennej test: %d\n", test);
    system("ps");
    sleep(30);
	return 0;
}
