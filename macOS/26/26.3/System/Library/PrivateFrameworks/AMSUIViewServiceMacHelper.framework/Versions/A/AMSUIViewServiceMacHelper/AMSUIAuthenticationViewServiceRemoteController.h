@class NSString;
@protocol AMSAuthenticationViewServiceHostProtocol;

@interface AMSUIAuthenticationViewServiceRemoteController : NSRemoteViewController <AMSAuthenticationViewServiceHostProtocol>

@property (weak) id<AMSAuthenticationViewServiceHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;
- (void)dismissViewService;

@end
