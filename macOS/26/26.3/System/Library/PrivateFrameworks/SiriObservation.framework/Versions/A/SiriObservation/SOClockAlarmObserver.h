@class NSHashTable, AFClockAlarmSnapshot, NSString, AFClockItemStorage, NSUUID, AFInstanceContext, NSObject, SOClockAlarmManager, NSMutableOrderedSet;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    SOClockAlarmManager *_alarmManager;
    AFClockAlarmSnapshot *_alarmSnapshot;
    NSObject<OS_dispatch_group> *_alarmSnapshotGroup;
    long long _alarmSnapshotGroupDepth;
    AFClockItemStorage *_alarmStorage;
    NSMutableOrderedSet *_notifiedFiringAlarmIDs;
    NSUUID *_alarmsChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)alarmsRemoved:(id)a0;
- (void)removeListener:(id)a0;
- (void)invalidate;
- (void)_setUp;
- (void)addListener:(id)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)_tearDown;
- (void)getFiringAlarmIDsWithCompletion:(id /* block */)a0;
- (void)_reset;
- (id)_alarmSnapshot;
- (id)init;
- (void)_endGroup;
- (void)alarmsChanged:(id)a0;
- (void)getAlarmSnapshotWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)alarmFired:(id)a0;
- (void)dealloc;
- (void)firingAlarmDismissed:(id)a0;
- (void)firingAlarmChanged:(id)a0;
- (void)_handleFetchAlarmsForReason:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)stateReset:(id)a0;
- (void)_beginGroup;
- (void)alarmsUpdated:(id)a0;
- (void)clockItemStorageDidUpdate:(id)a0 insertedItemIDs:(id)a1 updatedItemIDs:(id)a2 deletedItemIDs:(id)a3;
- (void)_fetchAlarmsForReason:(id)a0 completion:(id /* block */)a1;
- (void)alarmsAdded:(id)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)_consolidateNotifiedFiringAlarms;

@end
