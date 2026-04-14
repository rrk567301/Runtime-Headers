@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *asrEventListener;
@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionDetectedListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionProcessingListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;

+ (id)entryEventPointSelfTriggerSuppressionDetected;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardASREvent;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalSelfTriggerSuppression;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventForwardDefinitionSiriConfig;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)logEventForwardASREvent:(id)a0;
- (void)log;
- (void)logEventForwardDictationConnection:(id)a0;
- (unsigned long long)convertRecognition:(id)a0;
- (id)init;
- (void)initOperatorDependancies;
- (void)logEventPointSiriWakes:(id)a0;
- (unsigned long long)convertMode:(id)a0;
- (unsigned long long)convertSiriEvent:(id)a0;
- (void)logEventIntervalSelfTriggerSuppression:(id)a0;
- (void).cxx_destruct;
- (void)logEventPointSelfTriggerSuppressionDetected:(id)a0;
- (unsigned long long)convertASREvent:(id)a0;

@end
