@class NSArray, AVQueuePlayer, AVWeakReference, AVPlayerInterstitialEvent, AVPlayer;

@interface AVPlayerInterstitialEventMonitor : NSObject {
    AVPlayer *_primaryPlayer;
    AVQueuePlayer *_interstitialPlayer;
    AVWeakReference *_weakReference;
    struct OpaqueFigPlayerInterstitialCoordinator { } *_observedCoord;
}

@property (readonly, weak, nonatomic) AVPlayer *primaryPlayer;
@property (readonly, nonatomic) AVQueuePlayer *interstitialPlayer;
@property (readonly, copy) NSArray *events;
@property (readonly) AVPlayerInterstitialEvent *currentEvent;

+ (id)interstitialEventMonitorWithPrimaryPlayer:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_addMonitorListeners:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)_removeMonitorListeners;
- (id)initWithPrimaryPlayer:(id)a0;
- (id)makeCopyOf:(id)a0 immutable:(char)a1;

@end
