@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (id)_weakReference;
- (void)dealloc;
- (void)_detatchFromPlayerItem;
- (id)init;
- (BOOL)_attachToPlayerItem:(id)a0;

@end
