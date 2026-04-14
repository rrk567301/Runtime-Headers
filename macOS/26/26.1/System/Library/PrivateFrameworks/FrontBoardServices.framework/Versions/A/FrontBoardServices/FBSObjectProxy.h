@interface FBSObjectProxy : NSProxy {
    Class _class;
}

- (BOOL)isProxy;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (unsigned long long)length;
- (id)objectForKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)count;
- (BOOL)isEqual:(id)a0;
- (Class)class;
- (Class)superclass;
- (id)bs_secureEncoded;

@end
