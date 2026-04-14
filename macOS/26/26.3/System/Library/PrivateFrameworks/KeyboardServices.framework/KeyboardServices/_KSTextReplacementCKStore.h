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
- (id)textReplacementEntries;
- (void)removeAllEntries;
- (void)queryMigrationStatusOnCloudWithCallback:(id /* block */)a0;
- (id)cloudEntriesFromLocalEntries:(id)a0;
- (id)queryUpdatedLocalEntries;
- (void)pullRemoteDataWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (unsigned long long)getSyncCount;
- (void)pushMigrationStatusToCloud:(BOOL)a0;
- (BOOL)isAccountAvailable;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (unsigned long long)countLocalEntriesToBeSynced;
- (void)accountDidChange:(id)a0;
- (id)localEntriesFromCloudEntries:(id)a0;
- (id)initWithDirectoryPath:(id)a0;
- (void)pushAllLocalData;
- (void)_requestSync:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)importSampleShortcutsIfNecessary;
- (unsigned long long)totalPullRequestsUntilNow;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)userDidDeleteRecordZone:(id)a0;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateSyncCount:(unsigned long long)a0 success:(BOOL)a1;
- (id)queryDeletedEntries;
- (void)queryCloudIfFirstPullOrAccountChanged:(BOOL)a0;
- (unsigned long long)decayedSyncCountForTime:(id)a0;
- (void)recordSyncStatus;
- (void)dealloc;
- (void)removeAllEntriesWithCompletionHandler:(id /* block */)a0;
- (void)pushLocalChangesWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (id)cloudRecordIDsForLocalEntries:(id)a0;

@end
