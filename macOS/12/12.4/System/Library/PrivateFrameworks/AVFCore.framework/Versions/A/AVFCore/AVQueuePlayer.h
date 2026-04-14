@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)a0;

- (void)dealloc;
- (id)init;
- (void)removeItem:(id)a0;
- (void)removeAllItems;
- (id)items;
- (id)initWithItems:(id)a0;
- (void)setActionAtItemEnd:(long long)a0;
- (void)insertItem:(id)a0 afterItem:(id)a1;
- (long long)_defaultActionAtItemEnd;
- (void)advanceToNextItem;
- (BOOL)canInsertItem:(id)a0 afterItem:(id)a1;
- (BOOL)canOverlapPlaybackFromPlayerItem:(id)a0 toPlayerItem:(id)a1;

@end
