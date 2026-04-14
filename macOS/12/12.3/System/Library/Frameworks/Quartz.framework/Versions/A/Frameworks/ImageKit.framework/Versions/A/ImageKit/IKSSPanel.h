@class NSTimer, NSString, IKSSToolTip, IKWindowTransitionAnimation, NSMutableArray, IKSSBackgroundWindow, NSBundle, IKSlideshowHandler, IKSSButton;

@interface IKSSPanel : NSPanel <NSWindowDelegate, NSAnimationDelegate> {
    IKSlideshowHandler *_slideshowHandler;
    IKSSBackgroundWindow *_backgroundWindow;
    NSBundle *_bundle;
    int _currentXOffset;
    IKSSToolTip *_slideshowToolTip;
    NSMutableArray *_nextKeyViews;
    NSTimer *_fadeTimer;
    IKWindowTransitionAnimation *_animation;
    BOOL _mouseInside;
    BOOL _canBecomeVisible;
    BOOL _voiceOverIsOn;
}

@property IKSSButton *toolTipButton;
@property (readonly) IKSSButton *backButton;
@property (readonly) IKSSButton *playButton;
@property (readonly) IKSSButton *nextButton;
@property (readonly) IKSSButton *indexButton;
@property (readonly) IKSSButton *fullScreenButton;
@property (readonly) IKSSButton *addToiPhotoButton;
@property (readonly) IKSSButton *cancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finalize;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)accessibilityAttributeValue:(id)a0;
- (void)animationDidEnd:(id)a0;
- (void)windowWillMove:(id)a0;
- (void)windowDidMove:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)showPanel;
- (void)swipeWithEvent:(id)a0;
- (void)fadeOut;
- (void)setup;
- (void)setupButtons;
- (void)closeDown;
- (id)initWithBackgroundWindow:(id)a0;
- (void)hidePanel;
- (void)configureFullScreenButton;
- (void)configureActualSizeButton;
- (void)configureRemoveFromiPhotoButton;
- (void)configureAddToiPhotoButton;
- (void)mouseMovedInBackgroundWindow:(id)a0;
- (void)setupTooltipForButton:(id)a0;
- (void)disposeTooltipForButton:(id)a0;
- (int)addBackgroundImage:(int)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateToolTipForButtonIfNeeded:(id)a0;
- (void)configurePauseButton;
- (void)configurePlayButton;
- (void)hideTooltip;
- (void)slideshowPrev:(id)a0;
- (void)slideshowPlay:(id)a0;
- (void)slideshowPause:(id)a0;
- (void)slideshowNext:(id)a0;
- (void)slideshowSwitchToIndexMode:(id)a0;
- (void)slideshowSwitchToFullScreen:(id)a0;
- (void)slideshowSwitchToActualSize:(id)a0;
- (void)slideshowToggleExportToiPhoto:(id)a0;
- (void)slideshowCancel:(id)a0;
- (id)createButton:(BOOL)a0 rightSideDivider:(int)a1;
- (void)configureBackButton;
- (void)configureNextButton;
- (void)configureIndexButton;
- (void)configureCancelButton;
- (void)centerPanel;
- (void)showTooltipForButton:(id)a0;
- (void)fadeTimerElapsed:(id)a0;
- (void)resetFadeTimer;
- (void)updateWindowForProgress:(float)a0;

@end
