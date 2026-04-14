@interface PLSoCAgent : PLAgent

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (void)initOperatorDependancies;
- (void)log;
- (void)initTaskOperatorDependancies;
- (id)init;
- (id)requestLTSStats;
- (void)taskingEndNotificationReceived:(id)a0;
- (void)triggerLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;
- (void)registerForTaskingEndNotification;
- (void)registerForTaskingStartNotification;
- (void)taskingStartNotificationReceived:(id)a0;

@end
