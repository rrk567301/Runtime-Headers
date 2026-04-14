@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (BOOL)_attachToPlayerItem:(id)a0;
- (id)_weakReference;
- (void)_detatchFromPlayerItem;
- (id)init;
- (void)dealloc;

@end
