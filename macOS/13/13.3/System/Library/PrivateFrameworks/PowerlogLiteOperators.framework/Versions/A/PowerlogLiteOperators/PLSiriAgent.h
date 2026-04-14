@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryEventForwardDefinitionSiriConfig;
+ (id)entryEventPointDefinitionSiriWakes;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (unsigned long long)convertMode:(id)a0;
- (unsigned long long)convertRecognition:(id)a0;
- (unsigned long long)convertSiriEvent:(id)a0;
- (void)logEventForwardDictationConnection:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;

@end
