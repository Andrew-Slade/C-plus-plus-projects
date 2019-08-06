# Note: tabs are used, not spaces
# Flags: -g : gdb flag
#	 -Wall : all warnings
compiler = gcc
compiler_flags = -Wall
source = source

assemble: $(source).s
	$(compiler) $(compiler_flags) -S $(source).s $(source).c
executable: $(source).o
	$(compiler) $(compiler_flags) -o $(source) $(source).o
object.o: $(source).c
	$(compiler) $(compiler_flags) -c $(source).c
clean:
	- rm *.o $(source)
