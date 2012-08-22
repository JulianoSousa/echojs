
#ifndef _ejs_object_h_
#define _ejs_object_h_

#include "ejs.h"

typedef struct _EJSPropertyMap EJSPropertyMap;

typedef struct {
  EJSBool configurable;
  EJSBool writable;
  EJSBool enumerable;
} EJSPropertyDesc;

typedef struct {
  EJSValue *proto;
  EJSPropertyMap* map;
  EJSValue **fields;
} EJSObject;


EJSValue* _ejs_object_setprop (EJSValue* obj, EJSValue* key, EJSValue* value);
EJSValue* _ejs_object_getprop (EJSValue* obj, EJSValue* key);

extern EJSValue* _ejs_Object;

EJSValue* _ejs_object_new (EJSValue *proto);

EJSValue* _ejs_object_get_prototype();

void _ejs_object_init(EJSValue *global);

#endif // _ejs_object_h_
