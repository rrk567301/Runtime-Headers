@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (id)_weakReference;
- (BOOL)_attachToPlayerItem:(id)a0;
- (id)init;
- (void)_detatchFromPlayerItem;
- (void)dealloc;

@end
