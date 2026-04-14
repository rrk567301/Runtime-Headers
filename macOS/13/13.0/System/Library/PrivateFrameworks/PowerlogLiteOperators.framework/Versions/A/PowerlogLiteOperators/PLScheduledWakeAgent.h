@class PLSemaphore, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLScheduledWakeAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) NSMutableDictionary *previousScheduleWakeEvents;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardScheduledEvent;
- (id)humanReadableScheduledWakeString:(id)a0;

@end
