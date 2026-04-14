@interface PLSoCAgent : PLAgent

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (void)initTaskOperatorDependancies;
- (id)requestLTSStats;
- (void)taskingEndNotificationReceived:(id)a0;
- (void)triggerLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;
- (void)registerForTaskingEndNotification;
- (void)registerForTaskingStartNotification;
- (void)taskingStartNotificationReceived:(id)a0;

@end
