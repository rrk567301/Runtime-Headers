@class NSMutableDictionary, NSString, NSMutableSet, ISyncPlan, NSSet, NSTimer;

@interface ISyncPlanWatcher : NSObject {
    ISyncPlan *_currentPlan;
    NSMutableSet *_syncingDataClasses;
    NSMutableDictionary *_syncingDataClassesPerClient;
    BOOL _isSyncing;
    NSString *_syncProgressString;
    NSSet *_clients;
    NSSet *_types;
    BOOL _startNotificationSent;
    NSTimer *_delayedStopTimer;
    id _delegate;
}

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (BOOL)isSyncing;
- (void)_delayedStop;
- (void)_syncStatusChanged:(id)a0;
- (id)initWithClients:(id)a0 andTypes:(id)a1;
- (id)syncingDataClasses;
- (BOOL)_bruteForceIsSyncingCheck;
- (id)syncProgressString;
- (void)cancelSyncs;
- (void)setCurrentPlan:(id)a0;
- (id)currentPlan;
- (BOOL)_checkCurrentPlanIsSyncing;
- (BOOL)_planContainsClientsWeCareAbout:(id)a0;
- (void)_updateSyncingDataClases;
- (id)_outstandingPendingPlan;
- (void)_syncStatusChangedThread:(id)a0;

@end
