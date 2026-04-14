@protocol PKSettingsPaymentSheetDelegate;

@interface PKSettingsPaymentSheet : NSObject {
    id _controller;
}

@property (weak, nonatomic) id<PKSettingsPaymentSheetDelegate> delegate;
@property (nonatomic) BOOL succeeded;

- (void).cxx_destruct;
- (id)viewController;
- (id)initWithPaymentRequest:(id)a0;
- (void)paymentAuthorizationViewControllerDidFinish:(id)a0;
- (void)paymentAuthorizationViewController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;

@end
