@interface AppleMediaServicesUIPaymentSheets.PaymentServiceHostViewController : NSViewController {
    void /* unknown type, empty encoding */ remoteServiceProxy;
    void /* unknown type, empty encoding */ remoteViewController;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)requestRemoteViewControllerWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestXPCListenerEndpointWithCompletionHandler:(id /* block */)a0;

@end
