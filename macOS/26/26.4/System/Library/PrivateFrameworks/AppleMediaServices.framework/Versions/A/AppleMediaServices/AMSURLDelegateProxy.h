@class AMSURLSession;

@interface AMSURLDelegateProxy : NSObject

@property (weak, nonatomic) AMSURLSession *session;
@property (weak) id delegate;

- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithSession:(id)a0 delegate:(id)a1;

@end
