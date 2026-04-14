@class NSString, FCUserEventHistoryStorage;
@protocol FCUserEventHistoryStorageType;

@interface FCUserEventHistory : FCPrivateDataController <FCUserEventHistoryStorageObserver>

@property (retain, nonatomic) FCUserEventHistoryStorage *privateStorage;
@property (readonly, nonatomic) id<FCUserEventHistoryStorageType> storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresPushNotificationSupport;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedFirstSync;
+ (id)recordZoneID;
+ (id)storageDirectoryName;

- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (void)storage:(id)a0 didClearAllSessions:(id)a1;
- (void)storage:(id)a0 didStoreData:(id)a1 forSessionID:(id)a2;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2 sessionStorage:(id)a3;

@end
