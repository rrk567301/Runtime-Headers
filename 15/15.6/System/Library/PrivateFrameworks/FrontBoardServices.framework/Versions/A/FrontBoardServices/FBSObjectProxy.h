@interface FBSObjectProxy : NSProxy {
    Class _class;
}

- (char)isProxy;
- (Class)class;
- (char)conformsToProtocol:(id)a0;
- (id)copy;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (char)isMemberOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)mutableCopy;
- (char)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (unsigned long long)length;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)bs_secureEncoded;

@end
