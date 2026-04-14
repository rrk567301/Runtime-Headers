@class NSNumber, AMSUIAuthenticationViewServiceRemoteController, NSString;
@protocol AMSAuthenticationViewServiceRemoteProtocol;

@interface AMSUIAuthenticationViewServiceHostController : AMSUIViewServiceMacHelperHostController <AMSAuthenticationViewServiceHostProtocol>

@property (retain) NSNumber *action;
@property (retain) id<AMSAuthenticationViewServiceRemoteProtocol> remoteServiceProxy;
@property (retain) AMSUIAuthenticationViewServiceRemoteController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (id)requestXPCListenerEndpoint;
- (id)_requestRemoteViewController;
- (id)_requestRemoteObjectProxy;
- (void)dismissViewService;

@end
