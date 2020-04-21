#include <stdio.h>

int main (int argc, char **argv) {

if(argc<2){

printf ("Nie podałeś imienia! \n");
return 1;

}

else{

for(int i=1;i<argc;i++){

printf ("Witaj %s! \n",argv[i]);

}
		
return 0;
}
}
