@interface PLSoCAgent : PLAgent

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)taskingStartNotificationReceived:(id)a0;
- (void)taskingEndNotificationReceived:(id)a0;
- (void)registerForTaskingStartNotification;
- (void)registerForTaskingEndNotification;
- (id)requestLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;

@end
