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

- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (unsigned long long)getSyncCount;
- (id)queryUpdatedLocalEntries;
- (void)removeAllEntries;
- (void)queryMigrationStatusOnCloudWithCallback:(id /* block */)a0;
- (BOOL)isAccountAvailable;
- (void)userDidDeleteRecordZone:(id)a0;
- (unsigned long long)decayedSyncCountForTime:(id)a0;
- (id)queryDeletedEntries;
- (id)textReplacementEntries;
- (id)cloudEntriesFromLocalEntries:(id)a0;
- (id)localEntriesFromCloudEntries:(id)a0;
- (void)pullRemoteDataWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeAllEntriesWithCompletionHandler:(id /* block */)a0;
- (id)initWithDirectoryPath:(id)a0;
- (void)importSampleShortcutsIfNecessary;
- (void).cxx_destruct;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (void)_updateSyncCount:(unsigned long long)a0 success:(BOOL)a1;
- (unsigned long long)countLocalEntriesToBeSynced;
- (void)pushAllLocalData;
- (unsigned long long)totalPullRequestsUntilNow;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (void)accountDidChange:(id)a0;
- (unsigned long long)getSyncCountThrottleThreshold;
- (void)recordSyncStatus;
- (void)pushMigrationStatusToCloud:(BOOL)a0;
- (void)pushLocalChangesWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_requestSync:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)queryCloudIfFirstPullOrAccountChanged:(BOOL)a0;
- (id)cloudRecordIDsForLocalEntries:(id)a0;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
