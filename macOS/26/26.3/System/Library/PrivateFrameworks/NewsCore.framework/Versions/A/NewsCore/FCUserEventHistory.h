@class NSString, FCUserEventHistoryStorage;
@protocol FCUserEventHistoryStorageType;

@interface FCUserEventHistory : FCPrivateDataController <FCUserEventHistoryStorageObserver>

@property (retain, nonatomic) FCUserEventHistoryStorage *privateStorage;
@property (readonly, nonatomic) id<FCUserEventHistoryStorageType> storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedFirstSync;
+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (id)recordZoneID;
+ (BOOL)requiresHighPriorityFirstSync;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)storageDirectoryName;
+ (BOOL)requiresPushNotificationSupport;

- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)storage:(id)a0 didStoreData:(id)a1 forSessionID:(id)a2;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2 sessionStorage:(id)a3;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)storage:(id)a0 didClearAllSessions:(id)a1;

@end
