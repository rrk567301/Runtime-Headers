@class NSViewController, NSString, VUIPlayerControlsView, VUIAVPlayerView, AVPlayer;
@protocol VUIBackgroundPlayerView;

@interface VUIBackgroundPlayerViewController : NSViewController <AVPlayerViewDelegate>

@property (retain, nonatomic) VUIAVPlayerView *playerView;
@property (retain, nonatomic) NSViewController<VUIBackgroundPlayerView> *backgroundPlayerView;
@property (retain, nonatomic) VUIPlayerControlsView *internalControlsView;
@property (weak, nonatomic) VUIPlayerControlsView *externalControlsView;
@property (nonatomic) BOOL needsDefaultControl;
@property (nonatomic) BOOL isInFullScreen;
@property (nonatomic) BOOL shouldUseMediaView;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) struct CGPoint { double x; double y; } playerControlsPosition;
@property (readonly, nonatomic) VUIPlayerControlsView *controlsView;
@property (nonatomic) BOOL showsSystemPlayerControls;
@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic) BOOL showsFullScreenToggleButton;
@property (nonatomic, getter=isSwipeInteractionEnabled) BOOL swipeInteractionEnabled;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter;
@property (nonatomic, setter=_setClientLegibleContentInsets:) struct NSEdgeInsets { double top; double left; double bottom; double right; } _clientLegibleContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)viewDidLayout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)playerViewDidExitFullScreen:(id)a0;
- (void)playerViewWillEnterFullScreen:(id)a0;
- (void)_backgroundPlayerDidExitFullScreen:(id)a0;
- (void)_updateVideoGravity:(id)a0;
- (void)configureInternalControlsView;
- (void)configurePlayerView;
- (void)fullScreenSelected:(id)a0;
- (void)hideControls:(BOOL)a0;
- (void)hideControls:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithPlayer:(id)a0 externalControlsView:(id)a1 needsDefaultControl:(BOOL)a2;
- (void)linkControlsActions:(id)a0;
- (void)muteSelected:(id)a0;
- (void)playPauseSelected:(id)a0;
- (void)setupBackgroundPlayerView;
- (void)toggleFullScreen;

@end
