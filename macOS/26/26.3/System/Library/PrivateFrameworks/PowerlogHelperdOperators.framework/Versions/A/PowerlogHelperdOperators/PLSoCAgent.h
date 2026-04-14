@interface PLSoCAgent : PLAgent

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (void)initTaskOperatorDependancies;
- (void)log;
- (id)init;
- (void)initOperatorDependancies;
- (id)requestLTSStats;
- (void)taskingEndNotificationReceived:(id)a0;
- (void)triggerLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;
- (void)registerForTaskingEndNotification;
- (void)registerForTaskingStartNotification;
- (void)taskingStartNotificationReceived:(id)a0;

@end
