@interface PLContinuityAgent : PLAgent

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;
+ (id)entryEventNoneDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;

@end
