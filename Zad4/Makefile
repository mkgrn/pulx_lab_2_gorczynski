reciprocal: zad2_3.o reciprocal.o              
	g++ $(CFLAGS) -o reciprocal zad2_3.o reciprocal.o 
#skonsolidowanie plików nagłówkowych .o
zad2_3.o: zad2_3.c reciprocal.hpp
	gcc $(CFLAGS) -c zad2_3.c 
#skompilowanie funkcji .c - stworzenie pluku nagłówkowe
reciprocal.o: reciprocal.cpp reciprocal.hpp
	g++ $(CFLAGS) -c reciprocal.cpp 
#skompilowanie funkcji .cpp 
clean:
	rm -f *.o reciprocal 
#usunięcie plików .o po wywołaniu komendy make clean 

