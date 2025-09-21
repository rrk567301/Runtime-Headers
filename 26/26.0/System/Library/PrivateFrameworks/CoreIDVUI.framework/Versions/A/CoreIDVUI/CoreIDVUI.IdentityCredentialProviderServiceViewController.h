@class NSError, NSXPCListenerEndpoint;

@interface CoreIDVUI.IdentityCredentialProviderServiceViewController : NSServiceViewController <CoreIDVUI.IdentityCredentialProviderService> {
    void /* unknown type, empty encoding */ hostingView;
}

- (id)exportedInterface;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)remoteViewControllerInterface;
- (void)connectToViewServiceWith:(NSXPCListenerEndpoint *)a0 completionHandler:(void (^)(NSError *))a1;

@end
