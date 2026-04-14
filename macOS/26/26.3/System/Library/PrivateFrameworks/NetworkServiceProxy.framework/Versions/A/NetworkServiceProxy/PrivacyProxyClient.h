@interface PrivacyProxyClient : NSObject

+ (void)getServiceStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getServiceStatusTimeline:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setTrafficState:(unsigned long long)a0 proxyTraffic:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setPrivateAccessTokensEnabled:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)configurationFetch:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getAppStatuses:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPreferredProxy:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getGeohashSharingPreference:(id)a0 completionHandler:(id /* block */)a1;
+ (id)singleHopFallbackProxyAgentUUID;
+ (void)setGeohashSharingPreference:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setEnabled:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getUserTierExtended:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getEffectiveUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPreferredResolver:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getTrafficState:(id)a0 completionandler:(id /* block */)a1;
+ (id)bootstrapDNSAgentUUID;
+ (void)getPrivateAccessTokensEnabled:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPrivacyProxyAccountTypeExtended:(id)a0 completionHandler:(id /* block */)a1;
+ (id)dnsAgentUUID;
+ (void)getForceFallback:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setAppStatus:(unsigned long long)a0 path:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)currentProcessShouldUseOpaqueProxying;
+ (void)reportCellularNetworkStatus:(BOOL)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getOverriddeIngressProxy:(id)a0 completionHandler:(id /* block */)a1;
+ (void)overrideIngressProxy:(id)a0 fallbackProxy:(id)a1 key:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
+ (void)setAppStatus:(unsigned long long)a0 bundleIdentifier:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setUserTier:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getProxiedContentMapEnabledForIdentifier:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getPrivacyProxyAccountType:(id)a0 completionHandler:(id /* block */)a1;
+ (id)singleHopProxyAgentUUID;
+ (void)reportWiFiNetworkStatus:(BOOL)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setFreeUserTierUntilTomorrow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (id)multiHopProxyAgentUUID;
+ (id)multiHopFallbackProxyAgentUUID;
+ (void)getUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setForceFallback:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)overridePreferredProxy:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)overridePreferredResolver:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
