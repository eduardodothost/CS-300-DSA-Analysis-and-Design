build:
	g++ -std=c++11 -Wall -g *.cpp -o start.out

run:
	./start.out
debug:
	gdb start.out
	#gdbfrontend

clean:
	rm start.out	