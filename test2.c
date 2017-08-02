
#include "stdio.h"
#include "stdlib.h"

#define MEM_ALLOC_ERROR -1
#define OK 0
#define SIZE_ERROR -2
#define OTHER_ERROR -3

int path_test2(int size) {
  char *p;
  
  if (size <=0 )
  	return SIZE_ERROR;
  
  p = malloc(size);

  if (!p)
    return MEM_ALLOC_ERROR;

  if (!some_other_function()) {
    free(p);
    return OTHER_ERROR;
  }

  if (!yet_another_function()) {
    return OTHER_ERROR;
  }

  do_some_things(p);

  free(p);
  return OK;
}


