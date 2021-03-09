SOURCES := $(shell find src -name *.c)
OBJECTS := $(patsubst src/%, obj/%, $(SOURCES:.c=.o))
CC := gcc
CFLAGS := 
EXEC := output

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC) 

obj/%.o:src/%.c
	$(CC) -c $< -o $@
	
clean:
	rm -rf $(OBJECTS) $(EXEC)