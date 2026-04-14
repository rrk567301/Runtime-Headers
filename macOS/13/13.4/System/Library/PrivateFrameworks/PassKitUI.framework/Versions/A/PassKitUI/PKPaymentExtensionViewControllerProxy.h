@class NSViewController;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKPaymentExtensionViewControllerProxy : NSProxy {
    NSViewController *_paymentViewController;
}

@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;

@end
