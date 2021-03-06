#ifndef PS_STUFF_H
#define PS_STUFF_H

#include <stdarg.h>
#include <stdbool.h>

#define PS_ERR_BAD_PARAMETER_VALUE -1
#define PS_ERR_NONE 0

#define MB_ERR_IO -2


typedef int psS32;
typedef int psErrorCode;

//typedef enum {
//  false =0, 
//  true = 1 } bool;



/*--------------------------------------------------------------------------------*/

#define NO_TAG -1

void *psAlloc(size_t nelem);
void psFree(void *vec);
void psFreeAndZero(void **p);
void *psRealloc(void *ptr, size_t size);
void psTrace(char *tag, int tracelevel, char *format, ...);
void psTraceSetLevel(char *tag, int level);
int psTraceGetLevel(char *tag);

void psError(int code, bool whatever, char *format,...);

actData **psAllocMatrix(int n, int m);
#endif
