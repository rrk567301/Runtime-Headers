@interface PLContinuityAgent : PLAgent

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;

@end
