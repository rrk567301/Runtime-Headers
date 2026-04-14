@class PLXPCListenerOperatorComposition;

@interface PLMDNSAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *startBrowse;
@property (retain) PLXPCListenerOperatorComposition *stopBrowse;
@property (retain) PLXPCListenerOperatorComposition *startAdvertise;
@property (retain) PLXPCListenerOperatorComposition *stopAdvertise;
@property (retain) PLXPCListenerOperatorComposition *startResolve;
@property (retain) PLXPCListenerOperatorComposition *stopResolve;
@property (retain) PLXPCListenerOperatorComposition *clientSummary;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitionClientSummary;
+ (void)load;
+ (id)entryEventPointDefinitionsReceivedMDNSEvent;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventPointMDNS:(id)a0 forEvent:(id)a1;
- (void)logEventBackwardClientSummary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
