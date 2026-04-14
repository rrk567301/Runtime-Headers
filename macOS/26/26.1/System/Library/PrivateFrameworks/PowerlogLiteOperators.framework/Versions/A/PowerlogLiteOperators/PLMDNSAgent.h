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
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitionClientSummary;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionsReceivedMDNSEvent;
+ (id)entryEventNoneDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventBackwardClientSummary:(id)a0;
- (void).cxx_destruct;
- (void)logEventPointMDNS:(id)a0 forEvent:(id)a1;
- (id)init;

@end
