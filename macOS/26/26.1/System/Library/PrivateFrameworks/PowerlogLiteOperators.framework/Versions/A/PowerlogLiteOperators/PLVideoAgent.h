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
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)stateEnumForStateString:(id)a0;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;

- (void)initOperatorDependancies;
- (void)logEventBackwardCMVideoPlaybackWithEntry:(id)a0;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventBackwardVTTileWithEntry:(id)a0;
- (void)logEventIntervalGroupSession:(id)a0;
- (void)log;
- (void)logEventBackwardCMVideoQueueWithEntry:(id)a0;
- (int)convertPlaybackTypetoInt:(id)a0;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
