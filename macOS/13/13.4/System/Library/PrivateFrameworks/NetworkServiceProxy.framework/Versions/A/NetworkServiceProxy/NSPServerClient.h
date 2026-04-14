@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NSPServerClient : NSObject <NSPServerCommands> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_fetchTokenConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)checkOriginAllowedAsThirdParty:(id)a0;
- (void)convertPrivacyProxyConfigurationWithCompletionHandler:(id)a0 completionHandler:(id /* block */)a1;
- (void)establishTrustWithEdgeSetForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAppRuleForLabel:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchCurrentConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)fetchEdgeSetForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchPrivateAccessTokenWithFetcher:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStateForClient:(id)a0 withPeerEndpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)getForceFallbackWithCompletionHandler:(id /* block */)a0;
- (void)getGeohashSharingPreferenceWithCompletionHandler:(id /* block */)a0;
- (void)getOverrideIngressProxyWithCompletionHandler:(id /* block */)a0;
- (void)getPreferredProxyWithCompletionHandler:(id /* block */)a0;
- (void)getPreferredResolverWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyAccountTypeWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyConfiguration:(id /* block */)a0;
- (void)getPrivacyProxyDomainFilters:(id /* block */)a0;
- (void)getPrivacyProxyEffectiveUserTierWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyInfoWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyPolicyWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyServiceStatusTimelineWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyServiceStatusWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyStatusWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyTrafficStateWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyUserTierWithCompletionHandler:(id /* block */)a0;
- (void)getPrivateAccessTokensEnabledWithCompletionHandler:(id /* block */)a0;
- (void)locationAuthorizationStatusWithCompletionHandler:(id /* block */)a0;
- (void)mergePrivacyProxyPolicy:(id /* block */)a0;
- (void)overrideIngressProxy:(id)a0 fallbackProxy:(id)a1 key:(id)a2 completionHandler:(id /* block */)a3;
- (void)overridePreferredProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)overridePreferredResolver:(id)a0 completionHandler:(id /* block */)a1;
- (void)privateAccessTokensAllowTools:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)refreshWaldoNowWithCompletionHandler:(id /* block */)a0;
- (BOOL)removePrivacyProxyPolicy;
- (void)reportPrivacyProxyNetworkStatus:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportPrivacyProxyServiceStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)reportUsage:(id)a0 fromClient:(id)a1;
- (void)sendRTCReport:(long long)a0 errorCode:(long long)a1 url:(id)a2 completionHandler:(id /* block */)a3;
- (void)setAppRule:(id)a0 forLabel:(id)a1 completionHandler:(id /* block */)a2;
- (void)setCurrentConfiguration:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setCurrentLatitude:(double)a0 longitude:(double)a1 timestamp:(id)a2 forClient:(id)a3;
- (void)setEdgeSet:(id)a0 forIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setForceFallback:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setFreeUserTierUntilTomorrowWithCompletionHandler:(id /* block */)a0;
- (void)setGeohashOverride:(id)a0 completionHandler:(id /* block */)a1;
- (void)setGeohashSharingPreference:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setLocationMonitorInterval:(double)a0;
- (void)setPreferredPathRoutingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setPrivacyProxyConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPrivacyProxyPolicy:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPrivacyProxyStatus:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setPrivacyProxyTrafficState:(unsigned long long)a0 proxyTraffic:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setPrivacyProxyUserTier:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)setPrivateAccessTokensEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setTestLatencyMap:(id)a0 completionHandler:(id /* block */)a1;
- (void)startLocationMonitor;
- (void)startProxyToMPTCPConverterProxyWithCompletionHandler:(id /* block */)a0;
- (void)stopLocationMonitor;
- (void)stopProxyToMPTCPConverterProxyWithCompletionHandler:(id /* block */)a0;

@end
