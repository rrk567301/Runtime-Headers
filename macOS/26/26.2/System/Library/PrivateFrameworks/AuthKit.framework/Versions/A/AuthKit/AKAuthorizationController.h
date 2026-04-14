@class AKAuthorizationDaemonConnection, AKAuthorizationClientImpl;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

+ (BOOL)isURL:(id)a0 matchingAppleOwnedDomains:(id)a1;
+ (void)shouldProcessURL:(id)a0 completion:(id /* block */)a1;
+ (BOOL)canPerformAuthorization;
+ (BOOL)isURLFromAppleOwnedDomain:(id)a0;
+ (BOOL)isURLFromAllowListDomainsForSharingKey:(id)a0;
+ (id)appleOwnedDomains;
+ (BOOL)_matchURLProcessingSet:(id)a0 url:(id)a1;
+ (BOOL)shouldProcessURL:(id)a0;
+ (unsigned long long)appSSORequestTypeForURL:(id)a0;
+ (id)sharedController;

- (void)getCredentialStateForClientID:(id)a0 completion:(id /* block */)a1;
- (id)_appleOwnedDomains;
- (void)performAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)a0 error:(id *)a1;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)continueFetchingIconForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)a0;
- (void)performAuthorizationWithContext:(id)a0 withUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (id)_sharedKeyInfo;
- (void)_nativeTakeoverEndpointsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getPresentationContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (id)_nativeTakeoverURLs;
- (void)getCredentialStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)_allowListDomainsForSharingKey;
- (void)storeAuthorization:(id)a0 forProxiedRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldOverrideProxiedBundleIDForContext:(id)a0;
- (void)continueAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)cancelAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)revokeAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end
