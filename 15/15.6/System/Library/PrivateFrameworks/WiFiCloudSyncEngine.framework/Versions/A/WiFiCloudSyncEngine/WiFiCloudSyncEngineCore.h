@class NSThread, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface WiFiCloudSyncEngineCore : NSObject

@property NSUbiquitousKeyValueStore *keyValueStore;
@property void *context;
@property void /* function */ *callback;
@property NSThread *clientThread;
@property NSObject<OS_dispatch_queue> *clientQueue;
@property char iCloudSyncingEnabled;
@property char isKVSEncrypted;

- (void)dealloc;
- (void)registerCallback:(void /* function */ *)a0 queue:(id)a1 context:(void *)a2;
- (void)addToKVStore:(id)a0 synchronize:(char)a1;
- (void)clearKVS;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)a0;
- (void)enableIcloudSyncing:(char)a0 ForBundleId:(id)a1;
- (id)initWithEncryptedKVS:(char)a0;
- (void)printCompleteKVStore;
- (void)pruneKVSStoreAndReply:(id /* block */)a0;
- (void)queryKeychainSyncState;
- (id)readCompleteKVStore;
- (void)readStoreValueForKey:(id)a0;
- (void)registerCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)relayCloudCleanUpEvent;
- (void)relayCloudEvent:(id)a0;
- (void)relayKeychainSyncState:(id)a0;
- (void)relayMergeNetworks:(id)a0;
- (void)relayPruneKVSStore:(id)a0;
- (void)relayReadStoreValueAction:(id)a0;
- (void)removeFromKVStore:(id)a0;
- (void)subscribeKVStoreNotficationsForBundleId:(id)a0;
- (void)synchronizeAndCallMergeNetworksAndReply:(id /* block */)a0;
- (void)synchronizeKVS;
- (void)ubiquitousKeyValueStoreDidChange:(id)a0;
- (void)unSubscribeKVStoreNotfications;

@end
