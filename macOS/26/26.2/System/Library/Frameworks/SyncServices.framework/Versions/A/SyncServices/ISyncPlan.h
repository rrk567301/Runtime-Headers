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
- (id)entityNames;
- (int)syncStatus;
- (id)endDate;
- (id)participants;
- (id)startDate;
- (void)setSyncStatus:(int)a0;
- (void)dealloc;
- (id)createDate;
- (void)_fetchChanges;
- (void)cancelSyncing;
- (id)entityNamesForClient:(id)a0;
- (id)initWithSyncManager:(id)a0 planIdentifier:(id)a1;
- (id)planIdentifier;
- (id)syncPhaseDescription;

@end
