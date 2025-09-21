@class NSHashTable, NSString, NSUUID, AFClockItemStorage, SOClockTimerManager, AFInstanceContext, NSObject, NSMutableOrderedSet, AFClockTimerSnapshot;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    SOClockTimerManager *_timerManager;
    AFClockTimerSnapshot *_timerSnapshot;
    NSObject<OS_dispatch_group> *_timerSnapshotGroup;
    long long _timerSnapshotGroupDepth;
    AFClockItemStorage *_timerStorage;
    NSMutableOrderedSet *_notifiedFiringTimerIDs;
    NSUUID *_timersChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_reset;
- (void)getTimerSnapshotWithCompletion:(id /* block */)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)dealloc;
- (void)firingTimerChanged:(id)a0;
- (void)_fetchTimersForReason:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)timersUpdated:(id)a0;
- (void)timersAdded:(id)a0;
- (void)timerFired:(id)a0;
- (void)getFiringTimerIDsWithCompletion:(id /* block */)a0;
- (void)clockItemStorageDidUpdate:(id)a0 insertedItemIDs:(id)a1 updatedItemIDs:(id)a2 deletedItemIDs:(id)a3;
- (void)_tearDown;
- (void)stateReset:(id)a0;
- (void)firingTimerDismissed:(id)a0;
- (id)init;
- (void)_endGroup;
- (void)_setUp;
- (void)timersRemoved:(id)a0;
- (void)_consolidateNotifiedFiringTimers;
- (void)_beginGroup;
- (void)_handleFetchTimersForReason:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)removeListener:(id)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)addListener:(id)a0;
- (void)timersChanged:(id)a0;
- (void).cxx_destruct;
- (id)_timerSnapshot;

@end
