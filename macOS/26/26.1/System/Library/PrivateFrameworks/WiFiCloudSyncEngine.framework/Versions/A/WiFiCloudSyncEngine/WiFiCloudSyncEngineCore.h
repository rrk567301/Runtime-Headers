@class NSThread, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface WiFiCloudSyncEngineCore : NSObject

@property NSUbiquitousKeyValueStore *keyValueStore;
@property void *context;
@property void /* function */ *callback;
@property NSThread *clientThread;
@property NSObject<OS_dispatch_queue> *clientQueue;
@property BOOL iCloudSyncingEnabled;
@property BOOL isKVSEncrypted;

- (void)readStoreValueForKey:(id)a0;
- (void)removeFromKVStore:(id)a0;
- (id)initWithEncryptedKVS:(BOOL)a0;
- (void)pruneKVSStoreAndReply:(id /* block */)a0;
- (void)ubiquitousKeyValueStoreDidChange:(id)a0;
- (void)relayPruneKVSStore:(id)a0;
- (void)queryKeychainSyncState;
- (void)subscribeKVStoreNotficationsForBundleId:(id)a0;
- (id)readCompleteKVStore;
- (void)enableIcloudSyncing:(BOOL)a0 ForBundleId:(id)a1;
- (void)synchronizeAndCallMergeNetworksAndReply:(id /* block */)a0;
- (void)relayReadStoreValueAction:(id)a0;
- (void)addToKVStore:(id)a0 synchronize:(BOOL)a1;
- (void)unSubscribeKVStoreNotfications;
- (void)synchronizeKVS;
- (void)dealloc;
- (void)relayMergeNetworks:(id)a0;
- (void)relayKeychainSyncState:(id)a0;
- (void)clearKVS;
- (void)registerCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)registerCallback:(void /* function */ *)a0 queue:(id)a1 context:(void *)a2;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)a0;
- (void)printCompleteKVStore;
- (void)relayCloudEvent:(id)a0;
- (void)relayCloudCleanUpEvent;

@end
