@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {
    AVSynchronizedLayerInternal *_syncLayer;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;

+ (void)initialize;
+ (id)synchronizedLayerWithPlayerItem:(id)a0;

- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)init;
- (BOOL)_isVisible;
- (id)_popAllOldPlayerItems;
- (void)_removeSelfFromPlayerItem:(id)a0;
- (void)_updatePlayerItemState;

@end
