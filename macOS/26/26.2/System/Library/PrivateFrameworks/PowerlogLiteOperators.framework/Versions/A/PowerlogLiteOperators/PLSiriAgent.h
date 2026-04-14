@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *asrEventListener;
@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionDetectedListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionProcessingListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionSiriConfig;
+ (void)load;
+ (id)entryEventIntervalSelfTriggerSuppression;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryEventForwardASREvent;
+ (id)entryEventPointSelfTriggerSuppressionDetected;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventForwardDictationConnection:(id)a0;
- (void)logEventPointSelfTriggerSuppressionDetected:(id)a0;
- (void)logEventForwardASREvent:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)convertMode:(id)a0;
- (unsigned long long)convertSiriEvent:(id)a0;
- (id)init;
- (unsigned long long)convertRecognition:(id)a0;
- (unsigned long long)convertASREvent:(id)a0;
- (void)logEventIntervalSelfTriggerSuppression:(id)a0;

@end
