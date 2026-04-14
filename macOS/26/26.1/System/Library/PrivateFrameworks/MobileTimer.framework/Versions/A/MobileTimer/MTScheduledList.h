@class NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol MTScheduledListDelegate;

@interface MTScheduledList : NSObject

@property (weak, nonatomic) id<MTScheduledListDelegate> delegate;
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledAlerts;
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledNotifications;
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledEvents;
@property (retain, nonatomic) NSMutableDictionary *scheduledAlertMap;
@property (readonly, nonatomic) unsigned long long numberOfScheduledAlerts;
@property (readonly, nonatomic) unsigned long long numberOfScheduledAlertsAndNotifications;
@property (readonly, nonatomic) NSArray *scheduledAlerts;
@property (readonly, nonatomic) NSArray *scheduledAlertsAndNotifications;
@property (readonly, nonatomic) NSArray *scheduledObjects;

+ (id /* block */)_scheduledObjectComparator;
+ (void)_sort:(id)a0;
+ (id)_nextScheduledObjectInSets:(id)a0;
+ (id)_filterScheduledObjects:(id)a0 withBlock:(id /* block */)a1;
+ (id /* block */)_dateIntervalFilter:(id)a0;

- (void)unschedule:(id)a0;
- (id)nextScheduledAlert;
- (id)nextScheduledObjectWithTriggerType:(unsigned long long)a0;
- (void)_unscheduleObject:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)scheduledObjectsToFireInInterval:(id)a0;
- (id)scheduledObjectsToFireBeforeDate:(id)a0;
- (id)description;
- (void)schedule:(id)a0 afterDate:(id)a1 withCompletion:(id /* block */)a2;
- (void)reset;
- (id)nextScheduledObject;
- (void)_unschedule:(id)a0;
- (BOOL)isScheduled:(id)a0;
- (void).cxx_destruct;
- (void)_performScheduleChangingBlock:(id /* block */)a0 withCompletion:(id /* block */)a1;
- (id)_scheduledListForTriggerType:(unsigned long long)a0;
- (id)nextScheduledAlertOrNotification;
- (void)_scheduleObject:(id)a0;
- (id)init;

@end
