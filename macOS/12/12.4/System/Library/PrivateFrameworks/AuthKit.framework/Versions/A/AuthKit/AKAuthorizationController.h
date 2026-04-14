@class AKAuthorizationDaemonConnection, AKAuthorizationClientImpl;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

+ (id)sharedController;
+ (id)appleOwnedDomains;
+ (BOOL)canPerformAuthorization;
+ (BOOL)shouldProcessURL:(id)a0;
+ (BOOL)isURLFromAppleOwnedDomain:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)performAuthorizationWithContext:(id)a0 withUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)beginAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)continueAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)getCredentialStateForRequest:(id)a0 completion:(id /* block */)a1;
- (void)getCredentialStateForClientID:(id)a0 completion:(id /* block */)a1;
- (void)getPresentationContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)a0;
- (void)continueFetchingIconForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)storeAuthorization:(id)a0 forProxiedRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldOverrideProxiedBundleIDForContext:(id)a0;
- (id)_appleIDAuthorizationURLs;
- (id)_appleOwnedDomains;
- (void)performAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)revokeAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)a0 error:(id *)a1;

@end
