@class AVPlayerItem, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    id /* block */ _obtainCoordinator;
    AVPlayerItem *_weakReferenceToPlayerItem;
}

- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_updateTaggedRangeMetadataArray:(id)a0;
- (void).cxx_destruct;
- (void)_detatchFromPlayerItem;
- (void)dealloc;
- (id)initWithCoordinatorGenerator:(id /* block */)a0;

@end
