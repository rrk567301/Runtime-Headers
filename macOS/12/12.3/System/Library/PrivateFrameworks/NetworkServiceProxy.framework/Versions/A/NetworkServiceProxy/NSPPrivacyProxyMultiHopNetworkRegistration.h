@interface NSPPrivacyProxyMultiHopNetworkRegistration : NSPPrivacyProxyNetworkRegistration

- (id)initWithAgentUUID:(id)a0 delegate:(id)a1;
- (BOOL)setProxyAgentConfiguration:(id)a0 secondProxyHopURL:(id)a1 firstProxyHopKeyArray:(id)a2 secondProxyHopKeyArray:(id)a3 ingressTokenAgentUUID:(id)a4 egressTokenAgentUUID:(id)a5 fallbackAgentUUID:(id)a6 shouldFailOpen:(BOOL)a7 allowGeohash:(BOOL)a8 geohashOverride:(id)a9 enableDNSFilteringHint:(BOOL)a10 fallbackProxyConfigHash:(id)a11;

@end
