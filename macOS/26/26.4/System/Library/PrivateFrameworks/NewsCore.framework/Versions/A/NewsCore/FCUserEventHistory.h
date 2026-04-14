@class NSString, FCUserEventHistoryStorage;
@protocol FCUserEventHistoryStorageType;

@interface FCUserEventHistory : FCPrivateDataController <FCUserEventHistoryStorageObserver>

@property (retain, nonatomic) FCUserEventHistoryStorage *privateStorage;
@property (readonly, nonatomic) id<FCUserEventHistoryStorageType> storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordZoneID;
+ (id)desiredKeys;
+ (BOOL)requiresBatchedFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (long long)commandQueueUrgency;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)storageDirectoryName;
+ (id)backingRecordZoneIDs;

- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)storage:(id)a0 didClearAllSessions:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2 sessionStorage:(id)a3;
- (void)storage:(id)a0 didStoreData:(id)a1 forSessionID:(id)a2;

@end
