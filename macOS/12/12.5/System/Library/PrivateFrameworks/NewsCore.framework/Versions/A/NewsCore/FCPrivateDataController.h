@class NSHashTable, NSString, NSArray, FCKeyValueStore, FCPushNotificationCenter, FCCommandQueue, FCAsyncSerialQueue, FCCloudContext;

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant, FCAppActivityObserving> {
    BOOL _waitingForFirstSync;
    BOOL _preparedForUse;
    FCPushNotificationCenter *_pushNotificationCenter;
    NSString *_storeDirectory;
    FCCommandQueue *_commandQueue;
    NSArray *_syncManagers;
    unsigned long long _changeCount;
    FCAsyncSerialQueue *_syncQueue;
    NSHashTable *_stateObservers;
}

@property (readonly, nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (readonly, nonatomic) FCCloudContext *context;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) FCKeyValueStore *localStore;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, getter=isWaitingForFirstSync) BOOL waitingForFirstSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (BOOL)isLocalStoreKeyInternal:(id)a0;
+ (id)internalLocalStoreKeys;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)saveWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)performFirstSyncWithCompletion:(id /* block */)a0;
- (void)addCommandToCommandQueue:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)markAsDirty;
- (id)localStoreMigrator;
- (BOOL)canHelpPruneZoneName:(id)a0;
- (id)pruneRecords:(id)a0 forZoneName:(id)a1;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)a0;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)a0;
- (id)jsonEncodableObject;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)recordSyncManagerNotifyObservers:(id)a0;
- (void)recordSyncManager:(id)a0 stateDidChange:(id)a1;
- (void)forceSyncWithCompletion:(id /* block */)a0;
- (void)syncWithCompletion:(id /* block */)a0;
- (void)handleSyncCompletion;
- (void)performFirstSyncWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)a0;
- (void)zoneSyncManager:(id)a0 stateDidChange:(id)a1;
- (void)zoneSyncManagerNotifyObservers:(id)a0;
- (long long)qualityOfServiceForNextCommandInCommandQueue:(id)a0;
- (void)syncWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)addStateObserver:(id)a0;
- (void)removeStateObserver:(id)a0;
- (BOOL)isBackedByAnyRecordZoneIDsInSet:(id)a0;
- (void)_possiblySimulateCrashWithMessage:(id)a0;
- (void)enableSyncing;
- (void)disableSyncing;
- (void)createLocalStore;
- (void)mergeLocalStoreWithCloudWithPrivateDataDirectory:(id)a0;
- (void)prepareForUse;
- (void)assertReadyForUse;

@end
