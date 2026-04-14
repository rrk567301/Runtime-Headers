@interface FBSObjectProxy : NSProxy {
    Class _class;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (id)mutableCopy;
- (BOOL)isProxy;
- (id)objectForKey:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)copy;
- (BOOL)isKindOfClass:(Class)a0;
- (unsigned long long)length;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (unsigned long long)count;
- (id)methodSignatureForSelector:(SEL)a0;
- (Class)class;
- (Class)superclass;
- (id)bs_secureEncoded;

@end
