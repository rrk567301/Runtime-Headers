@interface PLSoCAgent : PLAgent

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (id)requestLTSStats;
- (void)taskingEndNotificationReceived:(id)a0;
- (void)triggerLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;
- (void)registerForTaskingEndNotification;
- (void)registerForTaskingStartNotification;
- (void)taskingStartNotificationReceived:(id)a0;

@end
