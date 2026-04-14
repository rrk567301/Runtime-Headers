@class NSString;
@protocol AMSPaymentRemoteHostProtocol;

@interface AMSUIPaymentViewServiceRemoteController : NSRemoteViewController <AMSPaymentRemoteHostProtocol>

@property (weak) id<AMSPaymentRemoteHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;
- (void)shouldDismissViewWithReply:(id /* block */)a0;
- (void)shouldDisplayViewWithReply:(id /* block */)a0;

@end
