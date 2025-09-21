@class NSView, NSDate, NSArray, VUIStateMachine, NSString, NSWindow, VUIPostPlayContainerViewController, VUIVideosPlayable;
@protocol VUIPostPlayManagerMetadataView;

@interface VUIPostPlayManager : NSObject <CAAnimationDelegate, VUIPlaybackUpNextControllerDelegate>

@property (retain, nonatomic) VUIVideosPlayable *playable;
@property (retain, nonatomic) VUIPostPlayContainerViewController *postPlayContainerViewController;
@property (retain, nonatomic) NSView *fullscreenButton;
@property (retain, nonatomic) NSView<VUIPostPlayManagerMetadataView> *metadataView;
@property (retain, nonatomic) VUIStateMachine *stateMachine;
@property (nonatomic) struct CGSize { double width; double height; } existingWindowMinSize;
@property (retain, nonatomic) NSDate *initialPlaybackStartDate;
@property (nonatomic) unsigned long long autoPlayedVideosCount;
@property (nonatomic) struct CGSize { double width; double height; } playbackAspectRatioAtPostPlayStart;
@property (nonatomic, getter=isPostPlayActive) char postPlayActive;
@property (retain, nonatomic) NSArray *trackingAreas;
@property (readonly, nonatomic) NSWindow *playbackWindow;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playbackAspectRatio;
@property (readonly, nonatomic) char isPostPlayActive;
@property (readonly, nonatomic) char isAutoPlayAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_windowDidResize:(id)a0;
- (void)animationDidStop:(id)a0 finished:(char)a1;
- (id)playbackView;
- (void)_didCrossPostPlayBoundary:(id)a0;
- (void)_disablePostPlay:(char)a0 completion:(id /* block */)a1;
- (void)_playbackWindowClosed:(id)a0;
- (void)_registerStateMachine;
- (void)_resetAutoPlayBingeWatchingQualifications;
- (void)_resizePlayerPiPWithAnimation:(char)a0 completion:(id /* block */)a1;
- (void)backgroundPlaybackWillBegin;
- (void)beginMonitoringPostPlayForPlayable:(id)a0 completion:(id /* block */)a1;
- (void)hostMetadataView:(id)a0;
- (void)mediaInfoDidChangeTo:(id)a0 canPlay:(char)a1 wasAutoPlayed:(char)a2;
- (void)playbackUpNextControllerDidUpdate;
- (void)playbackUpNextControllerReadyToBeDisplayed;
- (void)setPostPlayEnabled:(char)a0 animated:(char)a1 completion:(id /* block */)a2;
- (void)setPostPlayMode:(char)a0;
- (void)userDidInteract:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowBounds;

@end
