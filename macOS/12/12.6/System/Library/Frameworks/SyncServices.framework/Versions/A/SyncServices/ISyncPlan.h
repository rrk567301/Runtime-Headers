@class NSString, ISyncManager, NSArray, NSCalendarDate;

@interface ISyncPlan : NSObject {
    ISyncManager *_syncManager;
    NSString *_planId;
    NSCalendarDate *_createDate;
    NSCalendarDate *_startDate;
    NSCalendarDate *_endDate;
    NSArray *_participantInfos;
    NSString *_syncPhase;
    int _syncStatus;
}

- (void)finalize;
- (void)dealloc;
- (id)endDate;
- (id)startDate;
- (id)participants;
- (id)entityNames;
- (int)syncStatus;
- (void)setSyncStatus:(int)a0;
- (void)cancelSyncing;
- (id)createDate;
- (void)_fetchChanges;
- (id)planIdentifier;
- (id)initWithSyncManager:(id)a0 planIdentifier:(id)a1;
- (id)syncPhaseDescription;
- (id)entityNamesForClient:(id)a0;

@end
