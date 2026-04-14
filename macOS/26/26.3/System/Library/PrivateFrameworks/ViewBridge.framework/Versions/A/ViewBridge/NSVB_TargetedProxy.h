@interface NSVB_TargetedProxy : NSProxy {
    id _target;
}

+ (id)proxyWithTarget:(id)a0;

- (void)_setTarget:(id)a0;
- (id)_target;
- (id)description;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
