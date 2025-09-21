@class NSString, NSHashTable, NSMutableOrderedSet, NSObject, SOAlarmsSnapshot;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOAlarmsPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSHashTable *_subscribers;
    SOAlarmsSnapshot *_alarmsSnapshot;
    NSMutableOrderedSet *_dismissedAlarms;
}

@property (readonly, nonatomic) NSString *typeName;

- (void)alarmsUpdated:(id)a0;
- (void)alarmsAdded:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)dealloc;
- (void)alarmFired:(id)a0;
- (void)stateReset:(id)a0;
- (id)init;
- (void)_startObserving;
- (void)firingAlarmDismissed:(id)a0;
- (void)alarmsRemoved:(id)a0;
- (void).cxx_destruct;
- (void)firingAlarmChanged:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)_createNewSnapshotWithCompletion:(id /* block */)a0;
- (void)_notifySubscribersOfEvent:(long long)a0;
- (void)getCurrentSnapshotWithCompletion:(id /* block */)a0;

@end
