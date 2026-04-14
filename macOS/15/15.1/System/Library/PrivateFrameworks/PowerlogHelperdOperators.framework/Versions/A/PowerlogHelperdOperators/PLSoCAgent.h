@interface PLSoCAgent : PLAgent

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)taskingEndNotificationReceived:(id)a0;
- (id)requestLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;
- (void)registerForTaskingEndNotification;
- (void)registerForTaskingStartNotification;
- (void)taskingStartNotificationReceived:(id)a0;

@end
