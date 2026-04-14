@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *asrEventListener;
@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionDetectedListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionProcessingListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventPointSelfTriggerSuppressionDetected;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalSelfTriggerSuppression;
+ (id)entryEventForwardDefinitionSiriConfig;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardASREvent;
+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryEventNoneDefinitions;

- (void)initOperatorDependancies;
- (unsigned long long)convertMode:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;
- (void)logEventForwardDictationConnection:(id)a0;
- (unsigned long long)convertASREvent:(id)a0;
- (unsigned long long)convertRecognition:(id)a0;
- (void)log;
- (void)logEventForwardASREvent:(id)a0;
- (void)logEventIntervalSelfTriggerSuppression:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)convertSiriEvent:(id)a0;
- (void)logEventPointSelfTriggerSuppressionDetected:(id)a0;
- (id)init;

@end
