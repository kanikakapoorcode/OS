a) opendir() : open a directory.

b) readdir() : reads contents of directory.

c) closedir() : close a directory.

d) open() : open a file if it is already created otherwise creates a file and then opens it.

e) close() : close a file descriptor.

f) read() : read from a file descriptor.

g) write() : write to a file descriptor.

h) grep() : print lines matching a pattern.

execlp() : Used after the fork() system call by one of the two processes to replace the
process's memory space with a new program. It loads a binary file into memory destroying the
memory image of the program containing the execlp system call and starts its execution.The
child process overlays its address space with the UNIX command /bin/ls using the execlp
system call.