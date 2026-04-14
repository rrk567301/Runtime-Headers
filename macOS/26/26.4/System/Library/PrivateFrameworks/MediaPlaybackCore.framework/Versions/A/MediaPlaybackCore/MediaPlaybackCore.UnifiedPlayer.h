@class NSDictionary, AVQueuePlayer;

@interface MediaPlaybackCore.UnifiedPlayer : NSObject <MFExternalPlaybackConfigurable, MFStateDumpable> {
    void /* unknown type, empty encoding */ main;
    void /* unknown type, empty encoding */ interstitialObserver;
    void /* unknown type, empty encoding */ interstitialObserverToken;
    void /* unknown type, empty encoding */ reporter;
}

@property (nonatomic, retain) AVQueuePlayer *current;
@property (nonatomic) BOOL allowsExternalPlayback;
@property (nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive;
@property (nonatomic, readonly) long long playbackType;
@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
