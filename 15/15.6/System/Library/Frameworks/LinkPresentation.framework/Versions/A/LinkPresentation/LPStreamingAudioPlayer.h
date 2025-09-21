@class LPAudio, NSString, AVPlayerItem, NSHashTable, AVPlayer;

@interface LPStreamingAudioPlayer : NSObject <LPAudioPlayer, LPInProcessMediaPlayable> {
    LPAudio *_audio;
    AVPlayerItem *_item;
    AVPlayer *_player;
    id _timeObserver;
    id _endObserver;
    NSHashTable *_clients;
    unsigned long long _state;
}

@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) unsigned long long state;
@property (nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isMuted) char muted;
@property (readonly, nonatomic, getter=isFullScreen) char fullScreen;
@property (readonly, nonatomic) char usesSharedAudioSession;
@property (readonly, nonatomic) char shouldUnmuteWhenUserAdjustsVolume;
@property (readonly, nonatomic) unsigned long long lastInteractionTimestamp;
@property (readonly, nonatomic) double unobscuredAreaFraction;
@property (nonatomic, getter=isPlaying) char playing;
@property (readonly, nonatomic) char hasMuteControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerWithAudio:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pause;
- (void)reset;
- (void)addClient:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeClient:(id)a0;
- (void)play;
- (void)transitionToState:(unsigned long long)a0;
- (void)dispatchDidChangeProgressToAllClients:(float)a0;
- (void)dispatchDidFailToPlayToAllClients;
- (void)dispatchDidTransitionToStateToAllClients:(unsigned long long)a0;
- (id)initWithAudio:(id)a0;
- (void)resetPlaybackState;

@end
