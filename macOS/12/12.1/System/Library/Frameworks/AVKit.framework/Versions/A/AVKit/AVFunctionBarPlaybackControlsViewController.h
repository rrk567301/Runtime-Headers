@class NSMutableArray, NSView, AVPlayerControllerTimeResolver, AVPlayerView, AVFunctionBarScrubberController;
@protocol AVTimeControlling, AVFunctionBarPlaybackControlsControllingInternal, AVFunctionBarTrackControlling;

@interface AVFunctionBarPlaybackControlsViewController : NSViewController {
    AVFunctionBarScrubberController *_functionBarScrubberController;
    NSView *_timeLineView;
    NSView *_liveStreamingView;
    id _touchBarDidExitCustomizationObserver;
    NSMutableArray *_bindings;
}

@property (retain, nonatomic) AVPlayerControllerTimeResolver *intervalTimeResolver;
@property BOOL showsPlayButton;
@property (retain) id<AVFunctionBarPlaybackControlsControllingInternal, AVFunctionBarTrackControlling, AVTimeControlling> playerController;
@property (retain) AVPlayerView *playerView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (id)timeLineView;
- (id)liveStreamingView;
- (void)updateShowsPlayButton;
- (void)bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)unbindAllObjects;
- (void)reloadThumbailsOrAudioAmplitudeSamples;
- (id)makePlayButton;
- (BOOL)wantsPlayButton;

@end
