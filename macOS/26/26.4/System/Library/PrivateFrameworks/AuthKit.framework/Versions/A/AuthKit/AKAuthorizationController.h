@class AKAuthorizationDaemonConnection, AKAuthorizationClientImpl;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

+ (BOOL)canPerformAuthorization;
+ (id)appleOwnedDomains;
+ (BOOL)isURL:(id)a0 matchingAppleOwnedDomains:(id)a1;
+ (BOOL)isURLFromAllowListDomainsForSharingKey:(id)a0;
+ (id)sharedController;
+ (BOOL)_matchURLProcessingSet:(id)a0 url:(id)a1;
+ (BOOL)shouldProcessURL:(id)a0;
+ (void)shouldProcessURL:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isURLFromAppleOwnedDomain:(id)a0;
+ (unsigned long long)appSSORequestTypeForURL:(id)a0;

- (void)revokeAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_appleOwnedDomains;
- (BOOL)_shouldOverrideProxiedBundleIDForContext:(id)a0;
- (void)performAuthorizationWithContext:(id)a0 withUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (id)_sharedKeyInfo;
- (void)getCredentialStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_nativeTakeoverEndpointsWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)getCredentialStateForClientID:(id)a0 completion:(id /* block */)a1;
- (id)_allowListDomainsForSharingKey;
- (void)continueFetchingIconForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)continueAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_nativeTakeoverURLs;
- (void)getPresentationContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)performAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)storeAuthorization:(id)a0 forProxiedRequest:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)beginAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)a0;

@end
