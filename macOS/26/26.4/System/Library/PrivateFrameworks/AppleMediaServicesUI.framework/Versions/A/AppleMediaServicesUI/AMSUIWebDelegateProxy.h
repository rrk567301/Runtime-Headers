@interface AMSUIWebDelegateProxy : NSObject

@property (weak) id delegate;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithDelegate:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
