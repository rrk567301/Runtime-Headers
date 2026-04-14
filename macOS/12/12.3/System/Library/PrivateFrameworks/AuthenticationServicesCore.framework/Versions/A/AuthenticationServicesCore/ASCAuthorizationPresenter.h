@class NSString, NSXPCConnection;
@protocol ASCAuthorizationPresenterDelegate;

@interface ASCAuthorizationPresenter : NSObject <NSXPCListenerDelegate, ASCAuthorizationPresenterHostProtocol> {
    NSXPCConnection *_currentConnection;
}

@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (weak, nonatomic) id<ASCAuthorizationPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_proxy;
- (id)initWithEndpoint:(id)a0;
- (void)presentPINEntryInterface;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void)authorizationRequestInitiatedWithLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)validateUserEnteredPIN:(id)a0 completionHandler:(id /* block */)a1;
- (void)cableClientWillConnect;
- (void)cableClientWillAuthenticate;
- (void)presentError:(id)a0 forService:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateInterfaceForUserVisibleError:(id)a0;
- (void)presentAuthorizationWithContext:(id)a0;
- (void)authorizationRequestFinishedWithCredential:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;

@end
