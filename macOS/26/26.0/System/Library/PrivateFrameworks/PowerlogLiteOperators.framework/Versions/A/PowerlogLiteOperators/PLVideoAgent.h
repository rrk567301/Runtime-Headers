@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMVideoQueueListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *vTTileListener;
@property (retain) PLXPCListenerOperatorComposition *cMVideoPlaybackListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (void)load;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)stateEnumForStateString:(id)a0;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (int)convertPlaybackTypetoInt:(id)a0;
- (void)log;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventBackwardCMVideoPlaybackWithEntry:(id)a0;
- (id)init;
- (void)logEventBackwardCMVideoQueueWithEntry:(id)a0;
- (void)logEventBackwardVTTileWithEntry:(id)a0;
- (void)logEventIntervalGroupSession:(id)a0;
- (void).cxx_destruct;

@end
