@class PLSemaphore, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLScheduledWakeAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) NSMutableDictionary *previousScheduleWakeEvents;

+ (void)load;
+ (id)accountingGroupDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (void).cxx_destruct;
- (id)humanReadableScheduledWakeString:(id)a0;
- (void)logEventForwardScheduledEvent;

@end
