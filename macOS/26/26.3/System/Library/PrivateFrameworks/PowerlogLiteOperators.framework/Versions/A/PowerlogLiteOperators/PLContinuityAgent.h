@interface PLContinuityAgent : PLAgent

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)log;
- (id)init;
- (void)initOperatorDependancies;

@end
