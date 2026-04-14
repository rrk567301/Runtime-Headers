@interface NSVB_TargetedProxy : NSProxy {
    id _target;
}

+ (id)proxyWithTarget:(id)a0;

- (void)_setTarget:(id)a0;
- (id)_target;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void)dealloc;

@end
