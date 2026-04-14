@class NSViewController;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKPaymentExtensionViewControllerProxy : NSProxy {
    NSViewController *_paymentViewController;
}

@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;

@end
