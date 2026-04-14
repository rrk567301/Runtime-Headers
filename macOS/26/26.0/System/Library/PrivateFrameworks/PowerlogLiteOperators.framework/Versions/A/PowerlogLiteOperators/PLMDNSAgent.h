@class PLXPCListenerOperatorComposition;

@interface PLMDNSAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *startBrowse;
@property (retain) PLXPCListenerOperatorComposition *stopBrowse;
@property (retain) PLXPCListenerOperatorComposition *startAdvertise;
@property (retain) PLXPCListenerOperatorComposition *stopAdvertise;
@property (retain) PLXPCListenerOperatorComposition *startResolve;
@property (retain) PLXPCListenerOperatorComposition *stopResolve;
@property (retain) PLXPCListenerOperatorComposition *clientSummary;

+ (void)load;
+ (id)entryEventBackwardDefinitionClientSummary;
+ (id)entryEventPointDefinitionsReceivedMDNSEvent;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (void)logEventBackwardClientSummary:(id)a0;
- (void)logEventPointMDNS:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;

@end
