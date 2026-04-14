@interface PLAutoBindingBlackholeProxy : NSProxy {
    id _targetObject;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithTargetObject:(id)a0;

@end
