@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (void)dealloc;
- (id)init;
- (char)_attachToPlayerItem:(id)a0;
- (void)_detatchFromPlayerItem;
- (id)_weakReference;

@end
