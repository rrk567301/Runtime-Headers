@class NSXPCListener, NSString, ASAuthorizationViewController, ASCAgentProxy;
@protocol ASCAuthorizationPresenterHostProtocol;

@interface ASAuthorizationServiceViewController : NSServiceViewController <ASCAuthorizationPresenterHostProtocol, ASAuthorizationViewControllerDelegate, NSXPCListenerDelegate, ASCViewServiceProtocol, AuthenticationServicesHelperProtocol> {
    ASCAgentProxy *_agentProxy;
    ASAuthorizationViewController *_authorizationViewController;
    id<ASCAuthorizationPresenterHostProtocol> _presenterProxy;
    NSXPCListener *_daemonListener;
    id /* block */ _authorizationCompletionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)exportedObject;
- (void)loadView;
- (void)beginAuthorizationOnEndpoint:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)presentSheetForNearbyDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentError:(id)a0 forService:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void)presentPINEntryInterface;
- (void)updateInterfaceForUserVisibleError:(id)a0;
- (void)presentAuthorizationWithContext:(id)a0;
- (void)authorizationRequestInitiatedWithLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)authorizationRequestFinishedWithCredential:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)validateUserEnteredPIN:(id)a0 completionHandler:(id /* block */)a1;
- (void)cableClientWillConnect;
- (void)cableClientWillAuthenticate;
- (void)authorizationViewController:(id)a0 didRequestCredentialForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)authorizationViewController:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)authorizationViewController:(id)a0 validateUserEnteredPIN:(id)a1 completionHandler:(id /* block */)a2;
- (id)_newDaemonListener;

@end
