@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *asrEventListener;
@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionDetectedListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionProcessingListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;

+ (void)load;
+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryEventForwardDefinitionSiriConfig;
+ (id)entryEventIntervalSelfTriggerSuppression;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventForwardASREvent;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointSelfTriggerSuppressionDetected;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventForwardASREvent:(id)a0;
- (unsigned long long)convertRecognition:(id)a0;
- (unsigned long long)convertMode:(id)a0;
- (void)logEventIntervalSelfTriggerSuppression:(id)a0;
- (id)init;
- (unsigned long long)convertASREvent:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;
- (unsigned long long)convertSiriEvent:(id)a0;
- (void)logEventPointSelfTriggerSuppressionDetected:(id)a0;
- (void).cxx_destruct;
- (void)logEventForwardDictationConnection:(id)a0;

@end
