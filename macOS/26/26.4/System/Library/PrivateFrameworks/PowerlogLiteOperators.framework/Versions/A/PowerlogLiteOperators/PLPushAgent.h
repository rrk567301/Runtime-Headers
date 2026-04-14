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
@property (retain) PLXPCListenerOperatorComposition *messageSentListener;
@property (retain) PLXPCListenerOperatorComposition *messageReceivedListener;
@property (retain) PLXPCListenerOperatorComposition *pushProxyIncomingListener;
@property (retain) PLXPCListenerOperatorComposition *pushProxyOutgoingListener;

+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)bundleIdFromTopic:(id)a0;
+ (id)entryAggregateDefinitionAPSDConnected;
+ (id)entryAggregateDefinitionSentKeepAlive;
+ (id)entryAggregateDefinitionSentPushes;
+ (id)entryAggregateDefinitionSuppressedPushes;
+ (id)entryEventPointDefinitionIncomingPushProxyMessages;
+ (id)entryEventPointDefinitionMessage;
+ (id)entryEventPointDefinitionMessageReceived;
+ (id)entryEventPointDefinitionMessageSent;
+ (id)entryEventPointDefinitionOutgoingPushProxyMessages;
+ (id)entryEventPointDefinitionsAPSDConnectedEvent;
+ (id)entryEventPointDefinitionsReceivedKeepAlive;
+ (id)entryEventPointDefinitionsReceivedPush;
+ (id)entryEventPointDefinitionsSentKeepAlive;
+ (id)entryEventPointDefinitionsSentPush;
+ (BOOL)isHighPriorityPushEntry:(id)a0;
+ (id)replaceConnectionTypeWithEnum:(id)a0;

- (void)initOperatorDependancies;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)handleMessageEvent:(id)a0 isSentEvent:(BOOL)a1;
- (void)logEventPointReceivedKeepAlive:(id)a0;
- (void)accountReceivedPushWithEntry:(id)a0;
- (void)checkPushUsage:(id)a0 withPLEntry:(id)a1;
- (unsigned long long)convertMessageProtocol:(id)a0;
- (void)logAggregateSentKeepAlive:(id)a0;
- (void)logAggregateSuppressedPushes:(id)a0;
- (void)logPushProxyMessages:(id)a0 forMessageType:(id)a1;
- (void)sendEnergyIssueSignatureNotification:(id)a0 withThreshold:(double)a1;

@end
