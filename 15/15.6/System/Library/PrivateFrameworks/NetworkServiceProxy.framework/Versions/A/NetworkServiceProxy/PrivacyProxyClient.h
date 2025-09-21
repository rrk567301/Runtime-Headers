@interface PrivacyProxyClient : NSObject

+ (char)currentProcessShouldUseOpaqueProxying;
+ (void)overrideIngressProxy:(id)a0 fallbackProxy:(id)a1 key:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
+ (void)getAppStatuses:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getEffectiveUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getForceFallback:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getGeohashSharingPreference:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getOverriddeIngressProxy:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPreferredProxy:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPreferredResolver:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPrivacyProxyAccountType:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPrivacyProxyAccountTypeExtended:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPrivateAccessTokensEnabled:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getServiceStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getServiceStatusTimeline:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getTrafficState:(id)a0 completionandler:(id /* block */)a1;
+ (void)getUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getUserTierExtended:(id)a0 completionHandler:(id /* block */)a1;
+ (void)overridePreferredProxy:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)overridePreferredResolver:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)reportCellularNetworkStatus:(char)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)reportWiFiNetworkStatus:(char)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setAppStatus:(unsigned long long)a0 bundleIdentifier:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setAppStatus:(unsigned long long)a0 path:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setEnabled:(char)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setForceFallback:(char)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setFreeUserTierUntilTomorrow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setGeohashSharingPreference:(char)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setPrivateAccessTokensEnabled:(char)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setTrafficState:(unsigned long long)a0 proxyTraffic:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setUserTier:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
