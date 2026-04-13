@class NSView, AVAuxiliaryControlsView, NSLayoutAnchor, NSStackView, AVVolumeControlSlider, NSLayoutConstraint, NSButton, AVObservationController;

@interface AVFloatingPlaybackControlsViewController : AVPlayerControlsViewController {
    NSView *_initialFirstResponder;
    AVObservationController *_observationController;
    NSLayoutConstraint *_auxiliaryControlsContainerViewWidthConstraint;
    NSView *_controlsCenterLineView;
    NSView *_controlsBaselineView;
    NSView *_playButtonBaselineView;
}

@property (nonatomic) BOOL canUpdateControlsState;
@property (nonatomic) double animationDuration;
@property (readonly, nonatomic) NSLayoutAnchor *upperControlsBaseAnchor;
@property (readonly, nonatomic) NSLayoutAnchor *upperControlsCenterYAnchor;
@property (readonly, nonatomic) NSView *upperControlsContainerView;
@property (readonly, nonatomic) NSView *volumeControlContainerView;
@property (readonly, nonatomic) NSView *playbackControlsContainerView;
@property (readonly, nonatomic) AVAuxiliaryControlsView *auxiliaryControlsView;
@property (readonly, nonatomic) NSView *backwardScanRateTextContainerView;
@property (readonly, nonatomic) NSView *forwardScanRateTextContainerView;
@property (readonly, nonatomic) NSButton *goToEndOfSeekableRangesButton;
@property (readonly, nonatomic) AVVolumeControlSlider *volumeControl;
@property (readonly, nonatomic) NSStackView *timelineControl;

+ (id)keyPathsForValuesAffectingIntrinsicControlsContentViewSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initialFirstResponder;
- (void)loadView;
- (double)minimumWidth;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (long long)layoutStyle;
- (void)controlsConfigurationDidChange;
- (id)controlsStyleIdentifier;
- (id)backgroundBackdropViewMaskImage;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (void)auxiliaryControlsViewIntrinsicContentSizeDidChange:(id)a0;
- (void)updateViewDebuggingState;
- (void)setupNextKeyView;
- (BOOL)movableControlsContentView;
- (void)_setUpAuxiliaryControlsView;
- (void)_setUpObservations;
- (void)_setUpPlaybackControls;
- (void)_updateControlsState;
- (void)_updateShowsViewBackgrounds:(BOOL)a0;
- (void)_setUpDebugLineViewsIfNeeded;
- (void)_updateShowsControlsCenterLineView:(BOOL)a0;
- (void)_updateShowsControlsBaselineView:(BOOL)a0;
- (void)_setUpAuxiliaryControls;
- (void)_setUpPlaybackControlsContainer;
- (void)_setUpSlowMotionSlider;
- (void)_setUpTimelineControl;
- (void)_setUpUpperControlsContainerView;
- (void)_setUpVolumeControl;
- (void)_animateViewsIfNeeded:(id)a0 toHiddenState:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_updateAuxiliaryControlsViewStateIfNeeded;
- (void)_updatePlaybackControlsVisibilityIfNeeded;
- (void)_updateSkipForwardButtonVisibilityStateIfNeeded;
- (void)_updateSkipBackwardButtonVisibilityStateIfNeeded;
- (void)_updateVolumeControlsVisibilityIfNeeded;
- (void)_updateShowsPlayButtonBaselineView:(BOOL)a0;

@end
