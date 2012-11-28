CFLAGS=-Wall -g -O2
OBJS_LIB = lib.o lib1.o lib2.o
all: maintest

maintest: main.o alldata.o
	$(CC) $(LDFLAGS) -o $@ main.o alldata.o

alldata.o: $(OBJS_LIB)
	$(LD) $(LDFLAGS) -r $(OBJS_LIB) lib.ld -o $@

clean:
	-rm -f $(OBJS_LIB) main.o alldata.o maintest

