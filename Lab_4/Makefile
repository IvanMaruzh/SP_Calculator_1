CC=g++-11
CCFLAGS=-c -Wall

LIBSOURCES=calculator.cpp
LIBOBJECTS=$(LIBSOURCES:.cpp=.o)

MAIN=main.cpp
MAINOBJECT=$(MAIN:.cpp=.o)

STATICLIB=libloader.a

TARGET=Lab_4

all:
	$(CC) $(CCFLAGS) $(MAIN) $(LIBSOURCES)
	ar rcs $(STATICLIB) $(LIBOBJECTS)
	$(CC) $(MAINOBJECT) -L. -lloader -o $(TARGET)
	rm $(LIBOBJECTS) $(MAINOBJECT)

clean:
	-rm $(TARGET) $(STATICLIB)
