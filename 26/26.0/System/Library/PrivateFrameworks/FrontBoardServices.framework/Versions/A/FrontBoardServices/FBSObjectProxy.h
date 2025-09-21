@interface FBSObjectProxy : NSProxy {
    Class _class;
}

- (id)mutableCopy;
- (id)objectForKey:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (unsigned long long)count;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)copy;
- (void)forwardInvocation:(id)a0;
- (BOOL)isProxy;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)length;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)class;
- (Class)superclass;
- (id)bs_secureEncoded;

@end
