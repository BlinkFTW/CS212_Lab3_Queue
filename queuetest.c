/*
Eric Kang
Section 53
Lab 3

Description:
	This program tests all the functions, found in queue.c,
	in the implementation of a queue.

	Certain tests will include:
	- dequeueing and peeking an empty queue
	- enqueueing a full queue
	- illustrating that the queue is circular
	
*/

#include <stdio.h>
#include "queue.h"
#define DEBUG 1


int main()
{
	int i;
	int o;
    CREATE(queue1) ; //queue1[10];

	//Try and Dequeue the empty queue1
	printf("\nTrying to Dequeue...");	
	deQueue(queue1);

	//Try and Peek the empty queue1
	printf("\nTrying to Peek...");	
	peek(queue1);

	
	//initialize 5,10,15,20,25,30,35,40,45,50
    enQueue(queue1,5);
    enQueue(queue1,10);  
    enQueue(queue1,15);  
    enQueue(queue1,20);  
    enQueue(queue1,25);
    enQueue(queue1,30);
    enQueue(queue1,35);
    enQueue(queue1,40);
    enQueue(queue1,45);
    enQueue(queue1,50);


	printQueue(queue1);

	if(DEBUG)
		printQueue(queue1);	//Print queue1

	//Add 55 to full queue
	printf("\nTry and Enqueue...");
	enQueue(queue1,55);	

	//Dequeue
	o=deQueue(queue1);

	printf("\nTake out: %d",o);
	if(DEBUG)
		printQueue(queue1);	//Print queue1

	enQueue(queue1,100);
	if(DEBUG)
		printQueue(queue1);	//Print queue1

	deQueue(queue1);
	deQueue(queue1);
	deQueue(queue1);
	deQueue(queue1);
	deQueue(queue1);
	deQueue(queue1);

	enQueue(queue1, 1000);


	if(DEBUG)
		printQueue(queue1);	//Print queue1

	return 0;
};















