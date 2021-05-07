CC?=cc
LD?=ld
CFLAGS=-Wall -std=c99 -pedantic `pkg-config --cflags --libs glib-2.0`
LDFLAGS=-shared
LIBNAME=gex
OBJ=gex.o 

$(LIBNAME).so: $(OBJ)
	$(LD) $(LDFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm $(LIBNAME) *.o