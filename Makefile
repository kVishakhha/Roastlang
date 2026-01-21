CC = gcc
FLEX = flex
BISON = bison

TARGET = roastlang
SRCDIR = src

LEXER = $(SRCDIR)/roastlang.l
PARSER = $(SRCDIR)/roastlang.y
MAIN = $(SRCDIR)/main.c

all: $(TARGET)

$(TARGET): roastlang.tab.o lex.yy.o main.o
	$(CC) -o $@ $^ -lm

roastlang.tab.c roastlang.tab.h: $(PARSER)
	$(BISON) -d $(PARSER)

lex.yy.c: $(LEXER) roastlang.tab.h
	$(FLEX) -o $@ $<

roastlang.tab.o: roastlang.tab.c roastlang.tab.h
	$(CC) -Isrc -I. -c $<  # <-- ADDED -I.

lex.yy.o: lex.yy.c roastlang.tab.h
	$(CC) -Isrc -I. -c $<  # <-- ADDED -I.

main.o: $(MAIN) roastlang.tab.h
	$(CC) -Isrc -I. -c $<  # <-- ADDED -I.

test: $(TARGET)
	./$(TARGET) examples/01_hello.roast

clean:
	rm -f *.o roastlang.tab.c roastlang.tab.h lex.yy.c $(TARGET) $(TARGET).exe

.PHONY: all clean test