@class AVObservationController, NSButton;
@protocol AVTouchBarPlaybackControlsControllingInternal;

@interface AVTouchBarPlayButtonViewController : NSViewController

@property (retain) AVObservationController *observationController;
@property (retain) NSButton *playButton;
@property BOOL showsPlayButton;
@property (retain) id touchBarDidExitCustomizationObserver;
@property (retain) id<AVTouchBarPlaybackControlsControllingInternal> playerController;
@property (copy, nonatomic) id /* block */ playButtonLongPressAction;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)updateShowsPlayButton;
- (void)updatePlayButtonTitle;
- (void)playButtonTapped:(id)a0;
- (void)playButtonLongPress:(id)a0;

@end
