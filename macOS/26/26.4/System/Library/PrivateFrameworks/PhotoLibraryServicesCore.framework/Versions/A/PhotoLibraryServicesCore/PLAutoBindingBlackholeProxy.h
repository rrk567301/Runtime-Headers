@interface PLAutoBindingBlackholeProxy : NSProxy {
    id _targetObject;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithTargetObject:(id)a0;

@end
