@class LPVideo, NSString, LPYouTubePlayerView;

@interface LPYouTubeVideoView : LPVisualMediaView <LPYouTubePlayerDelegate> {
    LPYouTubePlayerView *_platformYouTubeView;
    char _allowingInteractionUntilPlaybackResumes;
}

@property (readonly, nonatomic) LPVideo *media;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isMuted;
- (void)setVolume:(double)a0;
- (double)volume;
- (void)setMuted:(char)a0;
- (void)setPlaying:(char)a0;
- (void)youTubePlayer:(id)a0 didChangeToState:(long long)a1;
- (id)createVideoPlayerView;
- (void)enterCustomFullScreen;
- (id)initWithHost:(id)a0 video:(id)a1 style:(id)a2 posterFrame:(id)a3 posterFrameStyle:(id)a4 configuration:(id)a5;
- (void)setAllowsUserInteractionWithVideoPlayer:(char)a0;
- (char)shouldShowMuteButton;
- (char)usesCustomFullScreenImplementation;
- (char)usesSharedAudioSession;
- (void)youTubePlayer:(id)a0 didReceiveError:(id)a1;

@end
