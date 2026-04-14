@interface NSVB_TargetedProxy : NSProxy {
    id _target;
}

+ (id)proxyWithTarget:(id)a0;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)_target;
- (void)_setTarget:(id)a0;

@end
