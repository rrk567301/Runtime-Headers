@class NSString;
@protocol AMSAuthenticationViewServiceHostProtocol;

@interface AMSUIAuthenticationViewServiceRemoteController : NSRemoteViewController <AMSAuthenticationViewServiceHostProtocol>

@property (weak) id<AMSAuthenticationViewServiceHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)dismissViewService;

@end
