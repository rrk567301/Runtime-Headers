@class NSString;

@interface BRCSyncUpScheduler : BRCFSSchedulerBase <BRCSyncUpCallbackProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountSession:(id)a0;
- (void)createSyncUpJobForItem:(id)a0 inZone:(id)a1;
- (void)_scheduleSyncUpJobForZoneWithRowID:(id)a0;
- (void)schedule;
- (void)prepareItemForSyncUp:(id)a0 inFlightDiffs:(unsigned long long)a1 inZone:(id)a2;
- (id)descriptionForItem:(id)a0 context:(id)a1;
- (void)performFirstSchedulingAfterStartupInDB:(id)a0;
- (void)_clearSyncUpErrorForItem:(id)a0;
- (void)setState:(int)a0 forItem:(id)a1 zone:(id)a2;
- (void)recoverAndReportMissingJobsWithCompletion:(id /* block */)a0 recoveryTask:(id)a1;
- (long long)timeToRetryForItem:(id)a0 zone:(id)a1;
- (void)createSyncUpJobForRowID:(unsigned long long)a0 inZone:(id)a1;
- (void)ineligibleSyncUpCallback:(id)a0 inZone:(id)a1;
- (void)blockSyncUpCallback:(id)a0 inZone:(id)a1;
- (unsigned long long)postponeSyncUpCallback:(id)a0 inZone:(id)a1;
- (unsigned long long)finishSyncUpForItem:(id)a0 inZone:(id)a1 success:(BOOL)a2;
- (BOOL)isItemPendingSyncUp:(id)a0;
- (void)deleteSyncUpJobsForItem:(id)a0;
- (void)_scheduleSyncUpJob:(id)a0;

@end
