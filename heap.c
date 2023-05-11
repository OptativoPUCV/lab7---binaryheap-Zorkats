#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  if(pq-> size == 0) return NULL;
  return pq -> heapArray[0].data;
}



void heap_push(Heap* pq, void* data, int priority){
  int i = pq-> size;

  if(pq->size == pq-> capac){
    pq->capac = pq -> capac * 2 + 1;
    pq->heapArray = realloc(pq->heapArray, pq->capac * sizeof(Heap));
  }
  
  while(priority > (pq->heapArray([i-1 / 2]).priority) && i != 0){
    pq->heapArray[i] = pq ->heapArray[(i-1) / 2];
    i = (i - 1) 
    
  }
  
}


void heap_pop(Heap* pq){

}

Heap* createHeap(){

  Heap *heap = malloc (sizeof(Heap));

  heap->heapArray = malloc(3 * sizeof(Heap));
  heap->size = 0;
  heap->capac = 3;
  
  return heap;
}
