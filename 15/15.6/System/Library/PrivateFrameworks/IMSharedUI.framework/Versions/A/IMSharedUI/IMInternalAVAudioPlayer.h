@class AVAudioPlayer, NSString, AVPlayerItem, AVPlayer;
@protocol IMInternalAVAudioPlayerDelegate;

@interface IMInternalAVAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    long long _avPlayerState;
    char _avPlayerPrepareRequested;
    char _avPlayerPlayRequested;
}

@property (readonly, nonatomic) long long playerType;
@property (weak, nonatomic) id<IMInternalAVAudioPlayerDelegate> delegate;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isPlaying) char playing;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly) double deviceCurrentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(char)a1;
- (void)prepareToPlay;
- (void)_handleAVPlayerItemStateChange;
- (void)_notifyPlayerDidFinishSuccessfully:(char)a0;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(char)a0;
- (char)_playAtTime:(double)a0;
- (void)_playerItemDidEndNotification:(id)a0;
- (id)initWithContentsOfURL:(id)a0 playerType:(long long)a1;
- (char)playAtTime:(double)a0;

@end
