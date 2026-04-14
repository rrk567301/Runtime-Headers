@class AKAuthorizationDaemonConnection, AKAuthorizationClientImpl;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

+ (unsigned long long)appSSORequestTypeForURL:(id)a0;
+ (BOOL)isURLFromAppleOwnedDomain:(id)a0;
+ (BOOL)shouldProcessURL:(id)a0;
+ (BOOL)isURLFromAllowListDomainsForSharingKey:(id)a0;
+ (BOOL)canPerformAuthorization;
+ (id)appleOwnedDomains;
+ (BOOL)_matchURLProcessingSet:(id)a0 url:(id)a1;
+ (BOOL)isURL:(id)a0 matchingAppleOwnedDomains:(id)a1;
+ (id)sharedController;
+ (void)shouldProcessURL:(id)a0 completion:(id /* block */)a1;

- (void)cancelAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_nativeTakeoverURLs;
- (void)revokeAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)a0;
- (void)beginAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_nativeTakeoverEndpointsWithCompletionHandler:(id /* block */)a0;
- (void)getCredentialStateForRequest:(id)a0 completion:(id /* block */)a1;
- (void)storeAuthorization:(id)a0 forProxiedRequest:(id)a1 completion:(id /* block */)a2;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)continueAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_allowListDomainsForSharingKey;
- (void)getPresentationContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (id)_sharedKeyInfo;
- (void).cxx_destruct;
- (void)getCredentialStateForClientID:(id)a0 completion:(id /* block */)a1;
- (id)_appleOwnedDomains;
- (BOOL)_shouldOverrideProxiedBundleIDForContext:(id)a0;
- (void)dealloc;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)performAuthorizationWithContext:(id)a0 withUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)continueFetchingIconForRequestContext:(id)a0 completion:(id /* block */)a1;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)a0 error:(id *)a1;
- (void)performAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;

@end
