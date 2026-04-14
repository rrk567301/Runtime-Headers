@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *asrEventListener;
@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionDetectedListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionProcessingListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;

+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardASREvent;
+ (id)entryEventIntervalSelfTriggerSuppression;
+ (id)entryEventPointSelfTriggerSuppressionDetected;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionSiriConfig;

- (void)initOperatorDependancies;
- (void)log;
- (unsigned long long)convertASREvent:(id)a0;
- (void)logEventForwardASREvent:(id)a0;
- (void)logEventIntervalSelfTriggerSuppression:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;
- (void).cxx_destruct;
- (void)logEventForwardDictationConnection:(id)a0;
- (void)logEventPointSelfTriggerSuppressionDetected:(id)a0;
- (id)init;
- (unsigned long long)convertMode:(id)a0;
- (unsigned long long)convertSiriEvent:(id)a0;
- (unsigned long long)convertRecognition:(id)a0;

@end
