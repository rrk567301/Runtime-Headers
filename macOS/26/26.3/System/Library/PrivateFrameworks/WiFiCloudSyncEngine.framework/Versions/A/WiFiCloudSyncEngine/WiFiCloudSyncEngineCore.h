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

- (void)relayMergeNetworks:(id)a0;
- (id)readCompleteKVStore;
- (void)registerCallback:(void /* function */ *)a0 queue:(id)a1 context:(void *)a2;
- (void)relayCloudCleanUpEvent;
- (void)removeFromKVStore:(id)a0;
- (void)readStoreValueForKey:(id)a0;
- (void)relayReadStoreValueAction:(id)a0;
- (void)clearKVS;
- (void)synchronizeAndCallMergeNetworksAndReply:(id /* block */)a0;
- (void)queryKeychainSyncState;
- (void)synchronizeKVS;
- (id)initWithEncryptedKVS:(BOOL)a0;
- (void)printCompleteKVStore;
- (void)relayPruneKVSStore:(id)a0;
- (void)dealloc;
- (void)addToKVStore:(id)a0 synchronize:(BOOL)a1;
- (void)pruneKVSStoreAndReply:(id /* block */)a0;
- (void)registerCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)unSubscribeKVStoreNotfications;
- (void)relayKeychainSyncState:(id)a0;
- (void)relayCloudEvent:(id)a0;
- (void)ubiquitousKeyValueStoreDidChange:(id)a0;
- (void)subscribeKVStoreNotficationsForBundleId:(id)a0;
- (void)enableIcloudSyncing:(BOOL)a0 ForBundleId:(id)a1;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)a0;

@end
