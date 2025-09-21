@interface CNWeakProxy : NSProxy {
    Class _targetClass;
    id _weakReference;
}

+ (id)weakProxyWithObject:(id)a0;

- (Class)class;
- (char)conformsToProtocol:(id)a0;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
