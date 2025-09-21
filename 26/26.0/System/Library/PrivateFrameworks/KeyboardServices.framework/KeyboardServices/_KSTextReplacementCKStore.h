@class NSString, _KSCloudKitManager, NSObject, _KSTextReplacementCoreDataStore;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol> {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property (retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore;
@property (nonatomic) BOOL ckMigrationStatusOnCloud;
@property (nonatomic) unsigned long long numPullRequests;
@property (retain, nonatomic) _KSCloudKitManager *cloudKitManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMigrationCompleted;

- (unsigned long long)getSyncCountThrottleThreshold;
- (unsigned long long)decayedSyncCountForTime:(id)a0;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void)_requestSync:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (unsigned long long)getSyncCount;
- (id)cloudRecordIDsForLocalEntries:(id)a0;
- (unsigned long long)countLocalEntriesToBeSynced;
- (void)removeAllEntriesWithCompletionHandler:(id /* block */)a0;
- (void)importSampleShortcutsIfNecessary;
- (void)queryMigrationStatusOnCloudWithCallback:(id /* block */)a0;
- (void)pushAllLocalData;
- (void)removeAllEntries;
- (id)queryDeletedEntries;
- (id)localEntriesFromCloudEntries:(id)a0;
- (id)queryUpdatedLocalEntries;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)pushLocalChangesWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userDidDeleteRecordZone:(id)a0;
- (id)initWithDirectoryPath:(id)a0;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (void)pushMigrationStatusToCloud:(BOOL)a0;
- (BOOL)isAccountAvailable;
- (void)pullRemoteDataWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)recordSyncStatus;
- (void)_updateSyncCount:(unsigned long long)a0 success:(BOOL)a1;
- (id)cloudEntriesFromLocalEntries:(id)a0;
- (unsigned long long)totalPullRequestsUntilNow;
- (void)accountDidChange:(id)a0;
- (void)queryCloudIfFirstPullOrAccountChanged:(BOOL)a0;
- (void).cxx_destruct;
- (id)textReplacementEntries;
- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;

@end
