@class AMSURLSession;

@interface AMSURLDelegateProxy : NSObject

@property (weak, nonatomic) AMSURLSession *session;
@property (weak) id delegate;

- (void)invalidate;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithSession:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
