CC = gcc
PKG =
CFLAGS = -W -Wall -g -O3
LDFLAGS = 
O = main.o num_magic.o
S = Makefile main.c num_magic.c

NumMagic:	$(O)
			$(CC) -o $@ $(O)

%.o : 	%.c
		$(CC) -c $< $(CFLAGS)

clean:	
	rm -rf core *.exe *~ *.o 