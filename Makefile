prog : queuetest.c queue.o queue.h
	gcc queuetest.c -oqueuetest.exe queue.o
queue.o : queue.c queue.h
	gcc queue.c -c
