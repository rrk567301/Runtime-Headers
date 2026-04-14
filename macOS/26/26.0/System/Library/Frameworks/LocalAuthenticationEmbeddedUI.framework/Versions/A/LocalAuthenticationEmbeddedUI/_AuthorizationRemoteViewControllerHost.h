@class NSString;
@protocol LACUIAuthenticatorUIDelegate;

@interface _AuthorizationRemoteViewControllerHost : NSRemoteViewController <LACUIAuthenticatorUI, LACUIAuthenticatorHost>

@property (weak, nonatomic) id<LACUIAuthenticatorUIDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (void)_requestViewController:(id)a0 connectionHandler:(id /* block */)a1;

- (void)dealloc;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceBundleIdentifier;
- (id)serviceViewControllerClassName;
- (void)authenticatorServiceDidFinishWithError:(id)a0 reply:(id /* block */)a1;
- (void)authenticatorServiceDidObtainAuthenticationWithReply:(id /* block */)a0;
- (void)startWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)stopWithReply:(id /* block */)a0;

@end
