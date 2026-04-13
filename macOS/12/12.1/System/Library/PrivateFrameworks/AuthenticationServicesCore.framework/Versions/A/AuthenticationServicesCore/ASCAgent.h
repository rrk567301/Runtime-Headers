@class NSXPCConnection, NSString, NSArray, ASCCredentialRequestContext, ASCAuthorizationPresenter, ASPublicKeyCredentialManager, ASCAuthorizationTrafficController, NSXPCListener;

@interface ASCAgent : NSObject <NSXPCListenerDelegate, ASPublicKeyCredentialManagerDelegate, ASCAuthorizationPresenterDelegate, ASCAgentProtocol> {
    ASCAuthorizationTrafficController *_authorizationTrafficController;
    BOOL _existingAppleIDCredentialAvailableForLogIn;
    NSArray *_passwordCredentials;
    NSXPCConnection *_connection;
    ASCCredentialRequestContext *_requestContext;
    NSString *_clientApplicationIdentifier;
    ASCAuthorizationPresenter *_requestPresenter;
    NSXPCListener *_viewServiceListener;
    ASPublicKeyCredentialManager *_publicKeyCredentialManager;
    NSArray *_platformLoginChoices;
    NSArray *_securityKeyLoginChoices;
    id /* block */ _didLoadPlatformCredentialsCallback;
    id /* block */ _userEnteredPINCallback;
    id /* block */ _pinResultCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)didReceiveError:(long long)a0;
- (void)didFetchPlatformLoginChoices:(id)a0;
- (void)didFetchSecurityKeyLoginChoices:(id)a0;
- (void)requestPINWithRemainingRetries:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)didCompleteAssertionWithCredential:(id)a0 error:(id)a1;
- (void)didCompleteRegistrationWithCredential:(id)a0 error:(id)a1;
- (void)userSelectedLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginAuthorizationForApplicationIdentifier:(id)a0 fromEndpoint:(id)a1;
- (void)requestCompletedWithCredential:(id)a0 error:(id)a1;
- (void)performAuthorizationRequestsForContext:(id)a0 withClearanceHandler:(id /* block */)a1;
- (id)initWithTrafficController:(id)a0 connection:(id)a1 publicKeyCredentialManager:(id)a2;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isClientWithApplicationIdentifier:(id)a0 properlyEntitledForRequestContext:(id)a1 error:(id *)a2;
- (void)_configureAppleIDCredentialwithCompletionHandler:(id /* block */)a0;
- (void)_configurePasswordCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)_configurePublicKeyCredentialsWithAssertionOptions:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_hasSignInOptionsForRequestTypes:(unsigned long long)a0;
- (void)_configureLoginChoicesForPresentationContext:(id)a0 withRequestContext:(id)a1;
- (void)_authorizationCompletedWithCredential:(id)a0 error:(id)a1;
- (void)_credentialRequestedForPasswordLoginChoice:(id)a0 completionHandler:(id /* block */)a1;
- (void)_credentialRequestedForPlatformLoginChoice:(id)a0 authenticatedContext:(id)a1;
- (void)_credentialRequestedForSecurityKeyLoginChoice:(id)a0;
- (BOOL)_clientHasNecessaryAuthKitEntitlements;
- (id)_bundleIDfromAppID:(id)a0;
- (void)_performAuthKitAuthorizationValidation;
- (id)_allAvailableLoginChoicesForRequestContext:(id)a0;
- (BOOL)_hasAnyCredentialsAvailableForRequestTypes:(unsigned long long)a0;
- (BOOL)_clientHasAuthKitDeveloperEntitlement;
- (BOOL)_clientIsAuthKitOwner;
- (BOOL)_clientIsInternalAuthKit;
- (BOOL)_clientIsPrivateAuthKit;
- (void)authorizationPresenter:(id)a0 credentialRequestedForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)authorizationPresenter:(id)a0 validateUserEnteredPIN:(id)a1 completionHandler:(id /* block */)a2;

@end
