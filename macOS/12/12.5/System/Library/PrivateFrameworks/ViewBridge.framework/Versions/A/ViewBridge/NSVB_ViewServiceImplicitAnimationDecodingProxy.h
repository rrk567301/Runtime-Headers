@class NSString, NSViewServiceMarshal, NSVB_ViewAnimationAttributes;

@interface NSVB_ViewServiceImplicitAnimationDecodingProxy : NSVB_TargetedProxy <NSVB_ViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {
    SEL _implicitAnimationSelector;
    NSVB_ViewAnimationAttributes *_animationAttributes;
}

@property (retain) NSViewServiceMarshal *serviceMarshal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyDecodingAnimationsForTarget:(id)a0 withServiceMarshal:(id)a1;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (void)__animateNextInvocationOfSelector:(id)a0 withAnimationAttributes:(id)a1;

@end
