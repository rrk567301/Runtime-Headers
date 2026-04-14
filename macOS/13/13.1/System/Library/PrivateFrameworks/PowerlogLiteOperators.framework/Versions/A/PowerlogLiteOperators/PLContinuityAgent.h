@interface PLContinuityAgent : PLAgent

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;

@end
