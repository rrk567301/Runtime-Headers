@interface AMSUIWebDelegateProxy : NSObject

@property (weak) id delegate;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
