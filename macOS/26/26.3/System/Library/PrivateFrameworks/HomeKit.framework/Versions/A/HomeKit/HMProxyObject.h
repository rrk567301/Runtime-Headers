@interface HMProxyObject : NSProxy

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)description;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)class;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (id)self;
- (Class)superclass;

@end
