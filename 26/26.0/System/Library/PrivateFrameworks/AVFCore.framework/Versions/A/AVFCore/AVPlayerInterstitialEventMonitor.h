@class NSObject, NSArray, AVQueuePlayer, NSString, AVPlayerInterstitialEvent, AVWeakReference, AVPlayer;
@protocol OS_dispatch_queue;

@interface AVPlayerInterstitialEventMonitor : NSObject {
    AVPlayer *_primaryPlayer;
    AVQueuePlayer *_interstitialPlayer;
    AVWeakReference *_weakReference;
    struct OpaqueFigPlayerInterstitialCoordinator { } *_observedCoord;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    AVPlayerInterstitialEvent *_cachedCurrentEvent;
}

@property (readonly, weak, nonatomic) AVPlayer *primaryPlayer;
@property (readonly, nonatomic) AVQueuePlayer *interstitialPlayer;
@property (readonly, copy) NSArray *events;
@property (readonly) AVPlayerInterstitialEvent *currentEvent;
@property (readonly) long long currentEventSkippableState;
@property (readonly) NSString *currentEventSkipControlLabel;

+ (id)interstitialEventMonitorWithPrimaryPlayer:(id)a0;

- (void)dealloc;
- (void)_removeMonitorListeners;
- (void)_addMonitorListeners:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (id)initWithPrimaryPlayer:(id)a0;
- (id)init;
- (void)_updateCachedCurrentEvent;
- (id)makeCopyOf:(id)a0 immutable:(BOOL)a1;
- (void).cxx_destruct;
- (void)_setCachedCurrentEvent:(id)a0;

@end
