@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMVideoQueueListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *vTTileListener;
@property (retain) PLXPCListenerOperatorComposition *cMVideoPlaybackListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)stateEnumForStateString:(id)a0;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)entryEventPointDefinitions;
+ (id)defaults;

- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventBackwardVTTileWithEntry:(id)a0;
- (void)log;
- (int)convertPlaybackTypetoInt:(id)a0;
- (void)logEventIntervalGroupSession:(id)a0;
- (void)logEventBackwardCMVideoPlaybackWithEntry:(id)a0;
- (id)init;
- (void)initOperatorDependancies;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void).cxx_destruct;
- (void)logEventBackwardCMVideoQueueWithEntry:(id)a0;

@end
