@interface PrivacyProxyClient : NSObject

+ (void)getPreferredResolver:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setEnabled:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getTrafficState:(id)a0 completionandler:(id /* block */)a1;
+ (void)setUserTier:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)reportWiFiNetworkStatus:(BOOL)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getServiceStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setGeohashSharingPreference:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (id)multiHopProxyAgentUUID;
+ (void)setFreeUserTierUntilTomorrow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setForceFallback:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getPreferredProxy:(id)a0 completionHandler:(id /* block */)a1;
+ (id)singleHopProxyAgentUUID;
+ (void)getGeohashSharingPreference:(id)a0 completionHandler:(id /* block */)a1;
+ (void)overridePreferredProxy:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setAppStatus:(unsigned long long)a0 bundleIdentifier:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)currentProcessShouldUseOpaqueProxying;
+ (void)getPrivacyProxyAccountType:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setAppStatus:(unsigned long long)a0 path:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getProxiedContentMapEnabledForIdentifier:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getEffectiveUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setTrafficState:(unsigned long long)a0 proxyTraffic:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getPrivateAccessTokensEnabled:(id)a0 completionHandler:(id /* block */)a1;
+ (id)multiHopFallbackProxyAgentUUID;
+ (void)getOverriddeIngressProxy:(id)a0 completionHandler:(id /* block */)a1;
+ (void)overrideIngressProxy:(id)a0 fallbackProxy:(id)a1 key:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
+ (void)getServiceStatusTimeline:(id)a0 completionHandler:(id /* block */)a1;
+ (id)bootstrapDNSAgentUUID;
+ (id)dnsAgentUUID;
+ (void)setPrivateAccessTokensEnabled:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)reportCellularNetworkStatus:(BOOL)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (id)singleHopFallbackProxyAgentUUID;
+ (void)getPrivacyProxyAccountTypeExtended:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getAppStatuses:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getForceFallback:(id)a0 completionHandler:(id /* block */)a1;
+ (void)overridePreferredResolver:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getUserTierExtended:(id)a0 completionHandler:(id /* block */)a1;
+ (void)configurationFetch:(id)a0 completionHandler:(id /* block */)a1;

@end
