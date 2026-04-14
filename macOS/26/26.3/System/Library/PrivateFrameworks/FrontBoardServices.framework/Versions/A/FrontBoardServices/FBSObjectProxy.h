@interface FBSObjectProxy : NSProxy {
    Class _class;
}

- (id)copy;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)mutableCopy;
- (unsigned long long)count;
- (unsigned long long)length;
- (BOOL)conformsToProtocol:(id)a0;
- (id)objectForKey:(id)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)class;
- (Class)superclass;
- (id)bs_secureEncoded;

@end
