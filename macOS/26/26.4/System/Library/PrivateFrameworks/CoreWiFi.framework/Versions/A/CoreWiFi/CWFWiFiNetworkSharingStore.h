@class CWFKeyValueStore;

@interface CWFWiFiNetworkSharingStore : NSObject {
    CWFKeyValueStore *_store;
}

- (id)clientIDs;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)activateWithCompletion:(id /* block */)a0;
- (unsigned long long)acknowledgedConnectedAPUpdateCounterForClientID:(id)a0;
- (unsigned long long)acknowledgedNetworksUpdateCounterForClientID:(id)a0;
- (unsigned long long)cachedAuthorizationStatusForClientID:(id)a0;
- (unsigned long long)connectedAPUpdateCounterForClientID:(id)a0;
- (void)incrementConnectedAPUpdateCounterForClientID:(id)a0;
- (void)incrementNetworksUpdateCounterForClientID:(id)a0;
- (id)mostRecentlySharedNetworkDateForClientID:(id)a0;
- (unsigned long long)networkListUpdateCounterForClientID:(id)a0;
- (id)networkMetadataForClientID:(id)a0;
- (id)networkMetadataForClientID:(id)a0 networkID:(id)a1;
- (void)resetMetadataForBundleID:(id)a0 accessoryID:(id)a1;
- (void)setAcknowledgedConnectedAPUpdateCounter:(unsigned long long)a0 clientID:(id)a1;
- (void)setAcknowledgedNetworksUpdateCounter:(unsigned long long)a0 clientID:(id)a1;
- (void)setCachedAuthorizationStatus:(unsigned long long)a0 clientID:(id)a1;
- (void)setNetworkMetadata:(id)a0 clientID:(id)a1 networkID:(id)a2;

@end
