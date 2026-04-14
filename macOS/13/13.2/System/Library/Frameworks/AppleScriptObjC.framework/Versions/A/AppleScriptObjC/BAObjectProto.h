@interface BAObjectProto : NSObject

+ (void)forwardInvocation:(id)a0;
+ (struct ComponentInstanceRecord { long long x0[1]; } *)getComponentInstance;
+ (unsigned int)getOSAID;
+ (id)invokeScriptHandler:(id)a0 forObject:(unsigned int)a1 inComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a2 args:(id)a3 error:(id *)a4;
+ (id)invokeScriptHandler:(id)a0 args:(id)a1 error:(id *)a2;
+ (BOOL)hasScriptHandler:(id)a0;

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (void)finalize;
- (id)valueForUndefinedKey:(id)a0;
- (id)_allProperties;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)propertyNames;
- (id)handlerNames;
- (struct ComponentInstanceRecord { long long x0[1]; } *)getComponentInstance;
- (unsigned int)getOSAID;
- (id)invokeScriptHandler:(id)a0 args:(id)a1 error:(id *)a2;
- (BOOL)hasScriptHandler:(id)a0;
- (struct ComponentInstanceRecord { long long x0[1]; } *)_getComponentInstance;
- (void)setComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;
- (unsigned int)_getOSAID;
- (void)setOSAID:(unsigned int)a0;
- (id)setterNames;
- (BOOL)hasScriptProperty:(id)a0;
- (BOOL)scriptHasGetter:(id)a0;
- (BOOL)scriptHasSetter:(id)a0;
- (BOOL)scriptRespondsToSelector:(SEL)a0;
- (void)dumpProperties:(id)a0;

@end
