@class NSViewController, AMSAuthenticateRequest;

@interface AMSUIAuthenticateCloudTask : AMSTask

@property (retain) AMSAuthenticateRequest *authRequest;
@property (retain) NSViewController *presentingViewController;

- (void).cxx_destruct;
- (id)initWithAuthRequest:(id)a0 presentingViewController:(id)a1;
- (id)performAuthenticate;

@end
