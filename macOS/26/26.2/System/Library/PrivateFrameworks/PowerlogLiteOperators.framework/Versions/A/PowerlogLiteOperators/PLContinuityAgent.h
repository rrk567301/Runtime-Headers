@interface PLContinuityAgent : PLAgent

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;

@end
