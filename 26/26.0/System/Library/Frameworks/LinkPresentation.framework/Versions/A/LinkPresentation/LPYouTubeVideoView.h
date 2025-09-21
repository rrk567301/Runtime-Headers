@class LPVideo, NSString, LPYouTubePlayerView;

@interface LPYouTubeVideoView : LPVisualMediaView <LPYouTubePlayerDelegate> {
    LPYouTubePlayerView *_platformYouTubeView;
    BOOL _allowingInteractionUntilPlaybackResumes;
}

@property (readonly, nonatomic) LPVideo *media;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaying:(BOOL)a0;
- (void)setVolume:(double)a0;
- (double)volume;
- (void)setMuted:(BOOL)a0;
- (BOOL)isMuted;
- (void).cxx_destruct;
- (void)youTubePlayer:(id)a0 didChangeToState:(long long)a1;
- (id)createVideoPlayerView;
- (void)enterCustomFullScreen;
- (id)initWithHost:(id)a0 video:(id)a1 style:(id)a2 posterFrame:(id)a3 posterFrameStyle:(id)a4 configuration:(id)a5;
- (void)setAllowsUserInteractionWithVideoPlayer:(BOOL)a0;
- (BOOL)shouldShowMuteButton;
- (BOOL)usesCustomFullScreenImplementation;
- (BOOL)usesSharedAudioSession;
- (void)youTubePlayer:(id)a0 didReceiveError:(id)a1;

@end
