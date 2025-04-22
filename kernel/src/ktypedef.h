#ifndef KTYPEDEF_H_INCLUDED
#define KTYPEDEF_H_INCLUDED






typedef signed char        INT8;
typedef short              INT16;
typedef int                INT32;
typedef long long          INT64;
typedef unsigned char      UINT8;
typedef unsigned short     UINT16;
typedef unsigned int       UINT32;
typedef unsigned long long UINT64;

typedef signed char        INT_LEAST8;
typedef short              INT_LEAST16;
typedef int                INT_LEAST32;
typedef long long          INT_LEAST64;
typedef unsigned char      UINT_LEAST8;
typedef unsigned short     UINT_LEAST16;
typedef unsigned int       UINT_LEAST32;
typedef unsigned long long UINT_LEAST64;

typedef signed char        INT_FAST8;
typedef int                INT_FAST16;
typedef int                INT_FAST32;
typedef long long          INT_FAST64;
typedef unsigned char      UINT_FAST8;
typedef unsigned int       UINT_FAST16;
typedef unsigned int       UINT_FAST32;
typedef unsigned long long UINT_FAST64;

typedef long long          INTMAX;
typedef unsigned long long UINTMAX;


typedef UINT8 BOOL;
#define FALSE 0
#define TRUE 1

typedef int INT;
typedef char CHAR;
typedef unsigned long ULONG;
typedef unsigned long long ULONGLONG;
typedef float FLOAT;
typedef double DOUBLE;
typedef void VOID;
typedef void* PVOID;
typedef char* PCHAR;
#define NULL ((void*)0)







#endif