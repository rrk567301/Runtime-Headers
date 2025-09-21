@class NSXPCConnection, NSString, NSError, NSUUID, MSVDefaultDictionary, NSObject, NSMutableSet, ICCloudServerListenerEndpointProvider;
@protocol OS_dispatch_source;

@interface ICCloudServiceStatusMonitor : NSObject <ICCloudServiceStatusRemoteMonitoringClient> {
    NSXPCConnection *_cloudServiceStatusMonitorConnection;
    NSError *_cloudServiceStatusMonitorConnectionEstablishmentError;
    NSMutableSet *_activeTransactionIdentifiersForCloudServiceStatusMonitorConnection;
    ICCloudServerListenerEndpointProvider *_listenerEndpointProvider;
    long long _privacyAcknowledgementPolicy;
    unsigned long long _observingCloudServiceStatusRequestsCount;
    NSUUID *_observationToken;
    NSString *_transactionIdentifierForActiveObservationToken;
    int _cloudServerLaunchedNotifyToken;
    NSObject<OS_dispatch_source> *_cloudServerLaunchTimeoutTimer;
    unsigned long long _capabilities;
    char _hasValidCapabilities;
    NSString *_storefrontCountryCode;
    NSString *_storefrontIdentifier;
    MSVDefaultDictionary *_developerTokenCompletionHandlers;
    MSVDefaultDictionary *_userTokenCompletionHandlers;
    MSVDefaultDictionary *_tokensCompletionHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property long long privacyAcknowledgementPolicy;
@property (readonly, getter=isObservingCloudServiceStatus) char observingCloudServiceStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_hasEntitlementForStatusAccessExemptedFromUserConsentRequirement;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)authorizationStatusForScopes:(long long)a0;
- (void)requestAuthorizationForScopes:(long long)a0 completionHandler:(id /* block */)a1;
- (void)storefrontCountryCodeDidChange:(id)a0;
- (void)_beginObservingCloudServiceStatus;
- (void)_beginTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)a0;
- (void)_cancelCloudServerLaunchedNotifyToken;
- (id)_cloudServiceStatusMonitorConnectionForTransactionIdentifier:(id)a0 error:(id *)a1;
- (void)_cloudServiceStatusMonitorConnectionWasInterrupted;
- (void)_cloudServiceStatusMonitorConnectionWasInvalidated;
- (void)_didBeginObservingCloudServiceStatusWithToken:(id)a0 transactionIdentifier:(id)a1;
- (void)_didEndObservingCloudServiceStatusWithToken:(id)a0 transactionIdentifier:(id)a1;
- (void)_didEndRequestingTokenWithTransactionIdentifier:(id)a0;
- (void)_endObservingCloudServiceStatusWithToken:(id)a0;
- (void)_endTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)a0;
- (void)_invalidateCloudServerLaunchTimeoutTimer;
- (void)_invalidateTriggersForCloudServiceStatusObservationRecovery;
- (char)_locked_isObservingCloudServiceStatus;
- (void)_performCloudServiceStatusMonitorRequestWithDescription:(id)a0 requestHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)_recoverObservingCloudServiceStatus;
- (void)_refreshCloudServiceStatus;
- (void)_registerCloudServerLaunchedNotifyToken;
- (void)_requestCapabilitiesWithPrivacyPromptPolicy:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestCapabilitiesWithPrivacyPromptPolicy:(long long)a0 requestCapabilitiesWithCompletionHandler:(id /* block */)a1;
- (void)_requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)a0;
- (void)_requestStorefrontIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)_resetCloudServiceStatusMonitorConnectionAllowingExplicitInvalidation:(char)a0;
- (void)_scheduleCloudServerLaunchTimeoutTimer;
- (void)_scheduleTriggersForCloudServiceStatusObservationRecovery;
- (void)_updateWithCapabilities:(unsigned long long)a0 hasValidCapabilities:(char)a1 transactionIdentifier:(id)a2;
- (void)_updateWithStorefrontCountryCode:(id)a0 transactionIdentifier:(id)a1;
- (void)_updateWithStorefrontIdentifier:(id)a0 transactionIdentifier:(id)a1;
- (void)_validateAuthorizationExpiryWithCompletionHandler:(id /* block */)a0;
- (void)activeAccountDidChange;
- (void)beginObservingCloudServiceStatus;
- (void)capabilitiesDidChange:(unsigned long long)a0;
- (void)endObservingCloudServiceStatus;
- (void)requestCapabilitiesWithCompletionHandler:(id /* block */)a0;
- (void)requestCapabilitiesWithPrivacyPromptPolicy:(long long)a0 completionHandler:(id /* block */)a1;
- (void)requestDeveloperTokenWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)requestMusicKitTokensWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)a0;
- (void)requestStorefrontIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)requestUserTokenForDeveloperToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestUserTokenForDeveloperToken:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)revokeMusicKitUserTokensForAccountDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)storefrontIdentifierDidChange:(id)a0;

@end
