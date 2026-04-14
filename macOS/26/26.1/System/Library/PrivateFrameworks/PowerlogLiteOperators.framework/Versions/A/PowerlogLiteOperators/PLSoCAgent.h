@interface PLSoCAgent : PLAgent

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
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
