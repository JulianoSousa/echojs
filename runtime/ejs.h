
#ifndef _ejs_h_
#define _ejs_h_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char EJSBool;
typedef struct _EJSContext* EJSContext;
typedef union _EJSValue EJSValue;

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

void _ejs_init();

extern EJSValue* _ejs_undefined;
extern EJSValue* _ejs_true;
extern EJSValue* _ejs_false;
extern EJSValue* _ejs_global;

typedef enum {
  // the primitives
  EJSValueTagBoolean,
  EJSValueTagNumber,
  EJSValueTagString,
  EJSValueTagUndefined,
  EJSValueTagObject,
} EJSValueTag;


#endif // _ejs_h_
