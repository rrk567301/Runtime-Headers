@interface GameStoreKit.VideoPlayer : AVPlayer {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _events;
    void /* unknown type, empty encoding */ videoUrl;
    void /* unknown type, empty encoding */ playerItem;
    void /* unknown type, empty encoding */ videoObserver;
    void /* unknown type, empty encoding */ playbackChecks;
    void /* unknown type, empty encoding */ failure;
    void /* unknown type, empty encoding */ failureCount;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ shouldBePlaying;
    void /* unknown type, empty encoding */ shouldLoopPlayback;
    void /* unknown type, empty encoding */ lastPlaybackTimeGuard;
    void /* unknown type, empty encoding */ lastPlaybackTimeUnsynchronized;
}

- (void)pause;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)replaceCurrentItemWithPlayerItem:(id)a0;
- (id)initWithPlayerItem:(id)a0;

@end
