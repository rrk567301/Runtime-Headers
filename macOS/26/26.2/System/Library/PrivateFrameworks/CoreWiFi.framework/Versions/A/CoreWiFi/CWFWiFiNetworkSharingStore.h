@class CWFKeyValueStore;

@interface CWFWiFiNetworkSharingStore : NSObject {
    CWFKeyValueStore *_store;
}

- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)clientIDs;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)acknowledgedNetworksUpdateCounterForClientID:(id)a0;
- (unsigned long long)cachedAuthorizationStatusForClientID:(id)a0;
- (void)incrementNetworksUpdateCounterForClientID:(id)a0;
- (unsigned long long)networkListUpdateCounterForClientID:(id)a0;
- (id)networkMetadataForClientID:(id)a0;
- (id)networkMetadataForClientID:(id)a0 networkID:(id)a1;
- (void)resetMetadataForBundleID:(id)a0 accessoryID:(id)a1;
- (void)setAcknowledgedNetworksUpdateCounter:(unsigned long long)a0 clientID:(id)a1;
- (void)setCachedAuthorizationStatus:(unsigned long long)a0 clientID:(id)a1;
- (void)setNetworkMetadata:(id)a0 clientID:(id)a1 networkID:(id)a2;

@end
