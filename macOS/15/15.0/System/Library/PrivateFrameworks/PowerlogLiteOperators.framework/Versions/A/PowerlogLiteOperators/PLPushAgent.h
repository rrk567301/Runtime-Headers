@class PLTimer, NSMutableDictionary, PLXPCListenerOperatorComposition, NSDate;

@interface PLPushAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *receivedPushListener;
@property (retain) PLXPCListenerOperatorComposition *sentPushListener;
@property (retain) PLXPCListenerOperatorComposition *suppressedPushesListener;
@property (retain) PLXPCListenerOperatorComposition *sentKeepAliveListener;
@property (retain) PLXPCListenerOperatorComposition *receivedKeepAliveListener;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numKeepAlives;
@property (retain) PLXPCListenerOperatorComposition *apsdConnectedListener;
@property (retain) NSMutableDictionary *pushUsageDict;
@property (retain) NSDate *detectionStartTime;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)bundleIdFromTopic:(id)a0;
+ (id)entryAggregateDefinitionAPSDConnected;
+ (id)entryAggregateDefinitionSentPushes;
+ (id)entryAggregateDefinitionSuppressedPushes;
+ (id)entryEventPointDefinitionMessage;
+ (id)entryEventPointDefinitionMessageReceived;
+ (id)entryEventPointDefinitionMessageSent;
+ (id)entryEventPointDefinitionsAPSDConnectedEvent;
+ (id)entryEventPointDefinitionsReceivedKeepAlive;
+ (id)entryEventPointDefinitionsReceivedPush;
+ (id)entryEventPointDefinitionsSentKeepAlive;
+ (id)entryEventPointDefinitionsSentPush;
+ (BOOL)isHighPriorityPushEntry:(id)a0;
+ (id)replaceConnectionTypeWithEnum:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointReceivedKeepAlive:(id)a0;
- (void)accountReceivedPushWithEntry:(id)a0;
- (void)checkPushUsage:(id)a0 withPLEntry:(id)a1;
- (void)logAggregateSuppressedPushes:(id)a0;
- (void)sendEnergyIssueSignatureNotification:(id)a0 withThreshold:(double)a1;

@end
