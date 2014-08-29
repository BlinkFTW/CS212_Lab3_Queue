#include "queue.h"

/*-------------------------------------------------------------------
 * name: enQueue
 * inputs: id[] (int queue)
 *		   v	(int)
 * outputs: (none)
 * Adds the item v at the top of the named queue and increments the 
 * pointer to the top of the queue.
 *------------------------------------------------------------------*/
void  enQueue(int id[], int v)
 {	   
	  int rear=MAXQUEUESIZE+1;	//set last element of id as rear pointer	
      if (isFull(id))
         printf("\nQueue is full\n");
      else
        {
			id[id[rear]] = v;
			id[rear] = (id[rear]+1)%MAXQUEUESIZE;
        };
 };  

/*-------------------------------------------------------------------
 * name: deQueue
 * inputs: id[] (int queue)
 * outputs: frontVal (int)
 * Stores value front points at in the named queue then increments front pointer
 * and returns its value to the calling program
 *------------------------------------------------------------------*/
int deQueue (int id[])	//remove front var, then increment front pointer
  {  
	int front=MAXQUEUESIZE;
	int frontVal;
     if (isEmpty(id))
        printf("\nQueue is empty\n");
     else
     {
		 frontVal = id[id[front]];	//store front value
		 id[id[front]] = 0;
		 id[front] = (id[front]+1)%MAXQUEUESIZE;	//increment front pionter in circular queue
     } 
	return frontVal;
  };

/*-------------------------------------------------------------------
 * name: isFull
 * inputs: id[] (int queue)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is full, if so 1 is returned
 * otherwise 0 is returned to the caller
 *------------------------------------------------------------------*/
int isFull(int id[])
  { 
	int front=MAXQUEUESIZE;
	int rear=MAXQUEUESIZE+1;
    if (id[front]==id[rear] && id[id[front]])
		return 1;
    else return 0;
  };

/*-------------------------------------------------------------------
 * name: isEmpty
 * inputs: id[] (int queue)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is empty, if so 1 is returned
 * otherwise 0 is returned to the caller.
 *------------------------------------------------------------------*/
int isEmpty(int id[])
  {
	int front=MAXQUEUESIZE;
    if (id[id[front]])
      return 0;
    else return 1;
  };    

/*-------------------------------------------------------------------
 * name: peek
 * inputs: id[] (int queue)
 * outputs: id[id[front]]	(int)
 * Returns the value on top of the named stack
 *------------------------------------------------------------------*/
int peek(int id[])
  {
	int front=MAXQUEUESIZE;
    if (isEmpty(id))
        printf("\nQueue is empty\n");
    else
		return id[id[front]];
  };

/*-------------------------------------------------------------------
 * name: qsize
 * inputs: id[] (int queue)
 * outputs: size (int)
 * Returns the the current number of elements in the named stack
 *------------------------------------------------------------------*/
int qsize(int id[])
  {
	int front=MAXQUEUESIZE;
	int rear=MAXQUEUESIZE+1;
	int size=0;
	int i;
	if(isEmpty(id))
		size = 0;
	else if(isFull(id))
		size = MAXQUEUESIZE;
	else if(id[id[rear]]==0)	//if id[id[rear]]==0 then queue is not full
	{
		for(i=0;i<=MAXQUEUESIZE-1;i++)	//Cycle through queue and count locations with non-zero values
		{
			if(id[i]!=0)
				size++;
		}//END for		
	}//END else if rear=0
	return size;
  };


/*-------------------------------------------------------------------
 * name: printQueue
 * inputs: id[] (int queue)
 * outputs: (none)
 * Prints a queue with indication of front and rear pointers, and size
 *------------------------------------------------------------------*/
void printQueue(int id[])
{
	int i;
	printf("\nQueue 1 size: %d\n---------\n", qsize(id));
	for(i=(MAXQUEUESIZE+1);i>=0;i--)
	{
		if(i==MAXQUEUESIZE+1)
			printf("%5d <- Rear Pointer\n", id[i]);
		else if(i==MAXQUEUESIZE)
			printf("%5d <- Front Pointer\n", id[i]);
		else
			printf("%5d\n", id[i]);
	}

};
