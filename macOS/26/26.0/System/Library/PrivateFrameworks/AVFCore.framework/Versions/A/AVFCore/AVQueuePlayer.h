@class NSArray, AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

@property (nonatomic, getter=supportsAdvanceTimeForOverlappedPlayback, setter=setSupportsAdvanceTimeForOverlappedPlayback:) BOOL supportsAdvanceTimeForOverlappedPlayback;
@property (copy, nonatomic) NSArray *itemsToPrebuffer;

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)a0;

- (void)removeItem:(id)a0;
- (id)initWithItems:(id)a0;
- (id)items;
- (void)dealloc;
- (id)init;
- (void)removeAllItems;
- (void)setActionAtItemEnd:(long long)a0;
- (void)willChangeItems;
- (void)_canOverlapPlaybackConditionsChangedFor:(id)a0 dueTo:(id)a1;
- (int)_canOverlapPlaybackFromPlayerItem:(id)a0 toPlayerItem:(id)a1;
- (long long)_defaultActionAtItemEnd;
- (int)_getChannelCountInFirstAudioTrackForItem:(id)a0;
- (int)_updateCurrentOverlapStateGiven:(int)a0 hasStateChanged:(BOOL *)a1;
- (void)advanceToNextItem;
- (BOOL)canInsertItem:(id)a0 afterItem:(id)a1;
- (BOOL)canOverlapPlaybackFromPlayerItem:(id)a0 toPlayerItem:(id)a1;
- (void)didChangeItems;
- (void)insertItem:(id)a0 afterItem:(id)a1;

@end
