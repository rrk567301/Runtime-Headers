@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (void)_detatchFromPlayerItem;
- (BOOL)_attachToPlayerItem:(id)a0;
- (id)_weakReference;
- (void)dealloc;
- (id)init;

@end
