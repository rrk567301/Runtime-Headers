@interface NSVB_ViewServiceImplicitAnimationEncodingProxy : NSVB_TargetedProxy {
    id _controlMessageTarget;
    unsigned char _windowFrameAnimationInProgress : 1;
}

+ (id)proxyEncodingAnimationsForTarget:(id)a0 controlMessageTarget:(id)a1 windowFrameAnimationInProgress:(BOOL)a2;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;

@end
