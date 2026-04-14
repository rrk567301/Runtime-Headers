@class AVPlayerItem, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    id /* block */ _obtainCoordinator;
    AVPlayerItem *_weakReferenceToPlayerItem;
}

- (void)dealloc;
- (void)_detatchFromPlayerItem;
- (BOOL)_attachToPlayerItem:(id)a0;
- (id)initWithCoordinatorGenerator:(id /* block */)a0;
- (void)_updateTaggedRangeMetadataArray:(id)a0;
- (void).cxx_destruct;

@end
