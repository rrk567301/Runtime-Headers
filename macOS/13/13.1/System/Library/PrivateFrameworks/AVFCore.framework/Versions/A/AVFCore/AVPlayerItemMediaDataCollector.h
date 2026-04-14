@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (void)dealloc;
- (id)init;
- (id)_weakReference;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detatchFromPlayerItem;

@end
