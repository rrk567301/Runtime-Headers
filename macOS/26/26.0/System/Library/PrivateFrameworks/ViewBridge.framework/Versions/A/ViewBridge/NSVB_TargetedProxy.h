@interface NSVB_TargetedProxy : NSProxy {
    id _target;
}

+ (id)proxyWithTarget:(id)a0;

- (id)_target;
- (void)_setTarget:(id)a0;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;

@end
