@class AMSURLSession;

@interface AMSURLDelegateProxy : NSObject

@property (readonly, weak) AMSURLSession *session;
@property (weak) id delegate;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 delegate:(id)a1;

@end
