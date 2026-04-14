@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMVideoQueueListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *vTTileListener;
@property (retain) PLXPCListenerOperatorComposition *cMVideoPlaybackListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)stateEnumForStateString:(id)a0;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventBackwardCMVideoPlaybackWithEntry:(id)a0;
- (void)logEventBackwardCMVideoQueueWithEntry:(id)a0;
- (void).cxx_destruct;
- (void)logEventBackwardVTTileWithEntry:(id)a0;
- (int)convertPlaybackTypetoInt:(id)a0;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (id)init;
- (void)logEventIntervalGroupSession:(id)a0;
- (void)logEventForwardVideoWithEntry:(id)a0;

@end
