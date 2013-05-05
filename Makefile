CC=clang++
OBJS = main.o File.o 
DEBUG= -g
CFLAGS= -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

swizz: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o swizz

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp 
	
File.o: fileManager/File.h  fileManager/File.cc
	$(CC) $(CFLAGS) fileManager/File.cc
	
clean:
	\rm *.o swizz
	
tar:
	tar czvf copy_app.tar.gz Ccopy.h Ccopy.cpp c_copy.cpp 