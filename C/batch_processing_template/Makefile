# the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -Wall -g

# define any directories containing header files other than /usr/include
INCLUDES = -I.

# define library paths in addition to /usr/lib
#   if I wanted to include libraries not in /usr/lib I'd specify
#   their path using -Lpath, something like:
LFLAGS = -L.

# define any libraries to link into executable:
#   if I want to link in libraries (libx.so or libx.a) I use the -llibname 
#   option, something like (this will link in libmylib.so and libm.so:
#LIBS = -lmylib

# define the executable file 
MAIN = kbbatch

# define the C source files
SRCS = kbbatch.c\
       kbpreprocedure.c\
       kbmainprocedure.c\
       kbpostprocedure.c

# define the C object files
OBJS = $(SRCS:%.c=%.o)

#
# The following part of the makefile is generic
#

.PHONY: clean

all: $(MAIN)
	@echo "Compiler named kbbatch has been compiled"

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

$(OBJS): $(SRCS)

#
# this is a suffix replacement rule
#

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
clean:
	$(RM) *.o $(MAIN) 
