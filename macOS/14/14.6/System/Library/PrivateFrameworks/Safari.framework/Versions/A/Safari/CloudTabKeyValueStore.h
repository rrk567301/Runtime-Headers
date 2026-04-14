@class NSMutableDictionary, WBSEncryptedCloudKeyValueStore, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CloudTabKeyValueStore : NSObject {
    NSObject<OS_dispatch_queue> *_keyValueStoreAccessQueue;
    WBSEncryptedCloudKeyValueStore *_syncedTabsKeyValueStore;
    NSMutableDictionary *_cachedSyncedTabsKeyValueStoreDictionaryRepresentation;
    id _syncedTabsKeyValueStoreChangeObserver;
    WBSEncryptedCloudKeyValueStore *_userRequestsKeyValueStore;
    NSMutableDictionary *_cachedUserRequestsKeyValueStoreDictionaryRepresentation;
    id _userRequestsKeyValueStoreChangeObserver;
    NSDate *_lastKeyValueStoreModDate;
    long long _numberOfInFlightDictionaryRepresentationUpdates;
}

@property (readonly, nonatomic, getter=isUpdatingKeyValueStoreDictionaryRepresentation) BOOL isUpdatingKeyValueStoreDictionaryRepresentation;
@property (copy, nonatomic) id /* block */ keyValueStoreChangeNotificationHandler;

+ (id)sharedCloudTabKeyValueStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cachedDictionaryRepresentationWasUpdated;
- (id)_cachedKeyValueStoreDictionaryForIdentifier:(long long)a0;
- (id)_keyValueStoreForIdentifier:(long long)a0;
- (void)_updateCachedDictionaryRepresentationFromKeyValueStore:(long long)a0;
- (void)_willModifyKeyValueStore;
- (id)dictionaryInKeyValueStore:(long long)a0 forKey:(id)a1;
- (id)dictionaryRepresentationForKeyValueStore:(long long)a0;
- (void)keyValueStoreDidChangeExternally:(long long)a0;
- (void)removeObjectInKeyValueStore:(long long)a0 forKey:(id)a1 blockUntilDone:(BOOL)a2;
- (void)removeObjectInKeyValueStore:(long long)a0 forKey:(id)a1 blockUntilDone:(BOOL)a2 bypassingCache:(BOOL)a3;
- (void)setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2 blockUntilDone:(BOOL)a3;
- (void)synchronizeKeyValueStore:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)waitForOperationsToComplete;

@end
