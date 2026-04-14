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
+ (void)load;
+ (id)entryEventBackwardDefinitionClientSummary;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionsReceivedMDNSEvent;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventPointMDNS:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)logEventBackwardClientSummary:(id)a0;

@end
