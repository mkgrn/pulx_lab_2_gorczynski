#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int spawn (char* program, char** arg_list) {
	pid_t child_pid;
	int child_status;
	pid_t pid;
	/* Duplicate this process. */
	child_pid = fork ();
	if (child_pid != 0){
		    /* PARENT */

		    if( (pid = wait(&child_status)) < 0){
		      perror("wait");
		      _exit(1);
		    }

		    printf("Parent: finished\n");
            sleep(50);
		    return child_status;

	} else {
		/* Now execute PROGRAM, searching for it in the path. */
		execvp (program, arg_list);
		/* The execvp function returns only if an error occurs. */
		fprintf (stderr, "an error occurred in execvp\n");
		exit(0);
	}
}

int main () {
	/* The argument list to pass to the “ls” command. */
	char* arg_list[] = {
			"ls", /* argv[0], the name of the program. */
			"-l",
			"/",
			NULL /* The argument list must end with a NULL. */
	};
	spawn ("ls", arg_list);
	printf ("done with main program\n");
	return 0;
}


