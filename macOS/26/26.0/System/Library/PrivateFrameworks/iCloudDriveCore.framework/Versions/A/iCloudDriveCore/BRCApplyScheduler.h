@class NSString, NSMutableSet;

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule, BRCSuspendable> {
    NSMutableSet *_clientZonesWatchingFaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)schedule;
- (void)_close;
- (void)setState:(int)a0 forServerItem:(id)a1 localItem:(id)a2;
- (void)didCompleteCrossZoneMigrationForAppLibrary:(id)a0;
- (void)didCreateMissingParentID:(id)a0 zone:(id)a1;
- (void)setState:(int)a0 andApplyKind:(unsigned int)a1 forRank:(long long)a2 zoneRowID:(id)a3;
- (void)didMarkSyncIdleForServerRank:(long long)a0 zone:(id)a1;
- (void)monitorFaultingForZone:(id)a0;
- (void)didReparentOrKillItemID:(id)a0 parentItemID:(id)a1 zone:(id)a2;
- (id)initWithAccountSession:(id)a0;
- (void)resetBackoffForServerItem:(id)a0;
- (unsigned long long)_addRanksUpToRank:(long long)a0 inZone:(id)a1;
- (void)didSyncDownZone:(id)a0 requestID:(unsigned long long)a1 upToRank:(long long)a2 caughtUpWithServer:(BOOL)a3;
- (void)createApplyJobFromServerItemRank:(long long)a0 localItem:(id)a1 state:(int)a2 kind:(unsigned int)a3;
- (void)setState:(int)a0 andApplyKind:(unsigned int)a1 forServerItem:(id)a2 localItem:(id)a3;
- (void)_didSyncDownZone:(id)a0 requestID:(unsigned long long)a1 upToRank:(long long)a2 caughtUpWithServer:(BOOL)a3 isFixingState:(BOOL)a4;
- (void)rescheduleItemsRecursivelyUnderFolder:(id)a0;
- (void)repopulateJobsForZone:(id)a0;
- (void)_handleWatchingFaults;
- (void)recoverAndReportMissingJobsWithCompletion:(id /* block */)a0 recoveryTask:(id)a1;
- (void)_scheduleApplyJobWithID:(id)a0 zone:(id)a1 applyKind:(unsigned int)a2;
- (BOOL)_rescheduleItemsParentedToItemGlobalID:(id)a0 flags:(unsigned int)a1;
- (void)_createApplyJobInZone:(id)a0 jobID:(id)a1 state:(int)a2 kind:(unsigned int)a3;
- (void)setState:(int)a0 forRank:(long long)a1 zoneRowID:(id)a2;
- (id)descriptionForRejectedItem:(id)a0 context:(id)a1;
- (void)stopMonitoringFaultingForZone:(id)a0;
- (void)fixAndAcknowledgeSyncDown:(id)a0 requestID:(unsigned long long)a1 upToRank:(long long)a2 caughtUpWithServer:(BOOL)a3;
- (void)_recoverAndReportMissingJobsWithCompletion:(id /* block */)a0 report:(BOOL)a1 recoveryTask:(id)a2;
- (void)rescheduleMissingTargetAliasesWithTarget:(id)a0;
- (void)_recoverAndCreateApplyJobsForServerItemsWithNoMatchingClientItems:(id)a0 batchSize:(unsigned long long)a1 recoveryTask:(id)a2 completion:(id /* block */)a3;
- (void)rescheduleItemRank:(long long)a0 zoneRowID:(id)a1 matchingState:(int)a2;
- (void)_rescheduleRank:(long long)a0 inState:(int)a1 forZone:(id)a2;
- (void)rescheduleItemsParentedToItemGlobalID:(id)a0;
- (void)createApplyJobFromServerItem:(id)a0 localItem:(id)a1 state:(int)a2 kind:(unsigned int)a3;
- (void)deleteNonRejectionJobsForZone:(id)a0;
- (void)deleteExpiredJobs;
- (void)rescheduleAllItemsPendingMigration;
- (void)generatedRanksForZone:(id)a0 upToRank:(long long)a1;
- (void)describeInBuffer:(id)a0 aggregateOfJobsMatching:(id)a1 context:(id)a2;
- (id)descriptionForServerItem:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)_setState:(int)a0 andApplyKind:(unsigned int)a1 forJobID:(id)a2;

@end
