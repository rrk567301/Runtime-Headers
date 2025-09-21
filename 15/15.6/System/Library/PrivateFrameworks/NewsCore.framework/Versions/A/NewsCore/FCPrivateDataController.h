@class NSHashTable, NSString, NSDate, FCKeyValueStore, FCCommandQueue, FCPushNotificationCenter, NSArray, FCAsyncSerialQueue, FCCloudContext;

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant, FCAppActivityObserving> {
    char _waitingForFirstSync;
    char _preparedForUse;
    FCPushNotificationCenter *_pushNotificationCenter;
    NSString *_storeDirectory;
    FCCommandQueue *_commandQueue;
    NSArray *_syncManagers;
    FCAsyncSerialQueue *_syncQueue;
    NSHashTable *_stateObservers;
}

@property (readonly, nonatomic, getter=isSyncingEnabled) char syncingEnabled;
@property (nonatomic, getter=isSyncingEnabled) char syncingEnabled;
@property (readonly, nonatomic) FCCloudContext *context;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) FCKeyValueStore *localStore;
@property (readonly, nonatomic, getter=isDirty) char dirty;
@property (readonly, getter=isWaitingForFirstSync) char waitingForFirstSync;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (char)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (id)internalLocalStoreKeys;
+ (char)isLocalStoreKeyInternal:(id)a0;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (char)requiresBatchedSync;
+ (char)requiresHighPriorityFirstSync;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)saveWithCompletion:(id /* block */)a0;
- (void)performFirstSyncWithCompletion:(id /* block */)a0;
- (void)zoneSyncManager:(id)a0 stateDidChange:(id)a1;
- (void)zoneSyncManagerNotifyObservers:(id)a0;
- (void)_possiblySimulateCrashWithMessage:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)addCommandToCommandQueue:(id)a0;
- (void)addStateObserver:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)assertReadyForUse;
- (char)canHelpPruneZoneName:(id)a0;
- (char)canHelpRestoreZoneName:(id)a0;
- (void)createLocalStore;
- (void)disableSyncing;
- (void)enableSyncing;
- (void)forceSyncWithCompletion:(id /* block */)a0;
- (void)handleSyncCompletion;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (char)isBackedByAnyRecordZoneIDsInSet:(id)a0;
- (id)jsonEncodableObject;
- (void)loadLocalCachesFromStore;
- (id)localStoreMigrator;
- (void)markAsDirty;
- (void)mergeLocalStoreWithCloudWithPrivateDataDirectory:(id)a0;
- (void)performFirstSyncWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)prepareForUse;
- (id)pruneRecords:(id)a0 forZoneName:(id)a1;
- (long long)qualityOfServiceForNextCommandInCommandQueue:(id)a0;
- (void)recordSyncManager:(id)a0 stateDidChange:(id)a1;
- (void)recordSyncManagerNotifyObservers:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeStateObserver:(id)a0;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)a0;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)a0;
- (void)syncWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)syncWithCompletion:(id /* block */)a0;

@end
