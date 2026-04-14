@interface PLContinuityAgent : PLAgent

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;

@end
