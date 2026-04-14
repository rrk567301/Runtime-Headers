@class NSString, VUIPlayerControlsView, VUIAVPlayerView, AVPlayer;

@interface VUIBackgroundPlayerViewController : NSViewController <AVPlayerViewDelegate>

@property (retain, nonatomic) VUIAVPlayerView *playerView;
@property (retain, nonatomic) VUIPlayerControlsView *internalControlsView;
@property (weak, nonatomic) VUIPlayerControlsView *externalControlsView;
@property (nonatomic) BOOL needsDefaultControl;
@property (nonatomic) BOOL isInFullScreen;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) struct CGPoint { double x; double y; } playerControlsPosition;
@property (readonly, nonatomic) VUIPlayerControlsView *controlsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLayout;
- (void)loadView;
- (void)viewDidLoad;
- (void)playerViewWillEnterFullScreen:(id)a0;
- (void)playerViewDidExitFullScreen:(id)a0;
- (void)linkControlsActions:(id)a0;
- (void)configurePlayerView;
- (void)configureInternalControlsView;
- (void)playPauseSelected:(id)a0;
- (void)muteSelected:(id)a0;
- (void)fullScreenSelected:(id)a0;
- (void)_updateVideoGravity:(id)a0;
- (id)initWithPlayer:(id)a0 externalControlsView:(id)a1 needsDefaultControl:(BOOL)a2;
- (void)hideControls:(BOOL)a0;

@end
