@class AMSUIPaymentViewServiceRemoteController, NSString;

@interface AMSUIPaymentViewServiceHostController : AMSUIViewServiceMacHelperHostController <AMSPaymentRemoteHostProtocol>

@property (retain) id remoteServiceProxy;
@property (retain) AMSUIPaymentViewServiceRemoteController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)shouldDismissViewWithReply:(id /* block */)a0;
- (void)shouldDisplayViewWithReply:(id /* block */)a0;
- (id)requestXPCListenerEndpoint;
- (id)_requestRemoteViewController;

@end
