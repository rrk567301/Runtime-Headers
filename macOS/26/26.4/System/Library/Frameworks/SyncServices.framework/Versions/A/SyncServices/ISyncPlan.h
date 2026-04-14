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

- (id)entityNames;
- (id)participants;
- (void)finalize;
- (id)startDate;
- (void)setSyncStatus:(int)a0;
- (int)syncStatus;
- (id)endDate;
- (void)dealloc;
- (id)createDate;
- (void)_fetchChanges;
- (void)cancelSyncing;
- (id)entityNamesForClient:(id)a0;
- (id)initWithSyncManager:(id)a0 planIdentifier:(id)a1;
- (id)planIdentifier;
- (id)syncPhaseDescription;

@end
