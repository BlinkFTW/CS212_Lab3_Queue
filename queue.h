#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdio.h>
#define MAXQUEUESIZE 10


#define CREATE(name)  int  name[MAXQUEUESIZE+2]={0} ;

void	enQue(int id[] ,int v);
int		deQueue (int id[]);
int		isFull(int id[]);
int		isEmpty(int id[]);
int		peek(int id[]);		
int		qsize(int id[]);
void	printQueue(int id[]);

#endif
