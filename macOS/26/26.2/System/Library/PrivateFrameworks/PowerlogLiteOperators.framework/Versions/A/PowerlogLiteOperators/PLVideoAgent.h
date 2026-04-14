@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMVideoQueueListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *vTTileListener;
@property (retain) PLXPCListenerOperatorComposition *cMVideoPlaybackListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)stateEnumForStateString:(id)a0;

- (void)logEventIntervalGroupSession:(id)a0;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void).cxx_destruct;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void)logEventBackwardCMVideoPlaybackWithEntry:(id)a0;
- (void)logEventBackwardVTTileWithEntry:(id)a0;
- (void)logEventBackwardCMVideoQueueWithEntry:(id)a0;
- (id)init;
- (int)convertPlaybackTypetoInt:(id)a0;

@end
