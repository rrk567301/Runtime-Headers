@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMFileListener;
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener;
@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)stateEnumForStateString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void)logEventBackwardCMFileWithEntry:(id)a0;
- (void)logEventBackwardCMHlsWithEntry:(id)a0;
- (void)logEventBackwardCMCrabsWithEntry:(id)a0;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventIntervalGroupSession:(id)a0;

@end
