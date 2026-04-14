@class PLXPCListenerOperatorComposition;

@interface PLMDNSAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *startBrowse;
@property (retain) PLXPCListenerOperatorComposition *stopBrowse;
@property (retain) PLXPCListenerOperatorComposition *startAdvertise;
@property (retain) PLXPCListenerOperatorComposition *stopAdvertise;
@property (retain) PLXPCListenerOperatorComposition *startResolve;
@property (retain) PLXPCListenerOperatorComposition *stopResolve;
@property (retain) PLXPCListenerOperatorComposition *clientSummary;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventBackwardDefinitionClientSummary;
+ (id)entryEventPointDefinitionsReceivedMDNSEvent;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)log;
- (void)logEventBackwardClientSummary:(id)a0;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventPointMDNS:(id)a0 forEvent:(id)a1;

@end
