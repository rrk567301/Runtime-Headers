@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NSPServerClient : NSObject <NSPServerCommands> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getErrorFromDict:(id)a0;

- (void).cxx_destruct;
- (id)getConnection;
- (id)initWithCallbackQueue:(id)a0;
- (void)setCurrentLatitude:(double)a0 longitude:(double)a1 timestamp:(id)a2 forClient:(id)a3;
- (void)fetchCurrentConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)setCurrentConfiguration:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)fetchEdgeSetForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setEdgeSet:(id)a0 forIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAppRuleForLabel:(id)a0 completionHandler:(id /* block */)a1;
- (void)setAppRule:(id)a0 forLabel:(id)a1 completionHandler:(id /* block */)a2;
- (void)establishTrustWithEdgeSetForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshWaldoNowWithCompletionHandler:(id /* block */)a0;
- (void)reportUsage:(id)a0 fromClient:(id)a1;
- (void)fetchStateForClient:(id)a0 withPeerEndpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)setTestLatencyMap:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPrivacyProxyConfiguration:(id /* block */)a0;
- (void)setPrivacyProxyConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)convertPrivacyProxyConfigurationWithCompletionHandler:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPrivacyProxyStatus:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getPrivacyProxyStatusWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyServiceStatusWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyServiceStatusTimelineWithCompletionHandler:(id /* block */)a0;
- (void)reportPrivacyProxyServiceStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)reportPrivacyProxyNetworkStatus:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPrivacyProxyUserTier:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)getPrivacyProxyUserTierWithCompletionHandler:(id /* block */)a0;
- (void)setPrivacyProxyTrafficState:(unsigned long long)a0 proxyTraffic:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)getPrivacyProxyTrafficStateWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyPolicyWithCompletionHandler:(id /* block */)a0;
- (void)setPrivacyProxyPolicy:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removePrivacyProxyPolicy;
- (void)mergePrivacyProxyPolicy:(id /* block */)a0;
- (void)locationAuthorizationStatusWithCompletionHandler:(id /* block */)a0;
- (void)setLocationMonitorInterval:(double)a0;
- (void)startLocationMonitor;
- (void)stopLocationMonitor;
- (void)getPrivacyProxyInfoWithCompletionHandler:(id /* block */)a0;
- (void)overridePreferredProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)overridePreferredResolver:(id)a0 completionHandler:(id /* block */)a1;
- (void)setForceFallback:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setGeohashSharingPreference:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getGeohashSharingPreferenceWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyAccountTypeWithCompletionHandler:(id /* block */)a0;
- (void)getPrivacyProxyEffectiveUserTierWithCompletionHandler:(id /* block */)a0;
- (void)sendRTCReport:(long long)a0 errorCode:(long long)a1 url:(id)a2 completionHandler:(id /* block */)a3;

@end
