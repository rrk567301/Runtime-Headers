@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
    WebScriptObjectPrivate *_private;
}

+ (void)initialize;
+ (id)_convertValueToObjcValue:(struct JSValue { union EncodedValueDescriptor { long long x0; struct JSCell *x1; struct { int x0; int x1; } x2; } x0; })a0 originRootObject:(void *)a1 rootObject:(void *)a2;
+ (char)throwException:(id)a0;
+ (id)scriptObjectForJSObject:(struct OpaqueJSValue { } *)a0 originRootObject:(void *)a1 rootObject:(void *)a2;

- (oneway void)release;
- (void)dealloc;
- (id)objectAtIndex:(unsigned int)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)stringRepresentation;
- (id)valueForKey:(id)a0;
- (void *)_imp;
- (void *)_originRootObject;
- (void *)_rootObject;
- (void)_setImp:(void *)a0 originRootObject:(void *)a1 rootObject:(void *)a2;
- (void)setException:(id)a0;
- (id)JSValue;
- (struct OpaqueJSValue { } *)JSObject;
- (struct OpaqueJSContext { } *)_globalContextRef;
- (id)_initWithJSObject:(void *)a0 originRootObject:(void *)a1 rootObject:(void *)a2;
- (char)_hasImp;
- (void)setWebScriptValueAtIndex:(unsigned int)a0 value:(id)a1;
- (char)_isSafeScript;
- (void)_setOriginRootObject:(void *)a0 andRootObject:(void *)a1;
- (id)callWebScriptMethod:(id)a0 withArguments:(id)a1;
- (id)evaluateWebScript:(id)a0;
- (char)hasWebScriptKey:(id)a0;
- (void)removeWebScriptKey:(id)a0;
- (id)webScriptValueAtIndex:(unsigned int)a0;

@end
