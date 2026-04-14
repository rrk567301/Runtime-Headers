@class PLSemaphore, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLScheduledWakeAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) NSMutableDictionary *previousScheduleWakeEvents;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;

- (void)log;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)humanReadableScheduledWakeString:(id)a0;
- (void)logEventForwardScheduledEvent;

@end
