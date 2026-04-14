@interface AppleMediaServicesUIPaymentSheets.PaymentServiceRemoteViewController : NSRemoteViewController <AMSPaymentRemoteHostProtocol> {
    void /* unknown type, empty encoding */ delegate;
}

- (id)exportedInterface;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;
- (void)shouldDismissViewWithReply:(id /* block */)a0;
- (void)shouldDisplayViewWithReply:(id /* block */)a0;

@end
