@class AVDisplayModeControlsView, NSView, AVAuxiliaryControlsView, NSLayoutAnchor, NSArray, NSStackView, AVVolumeControlButton, NSLayoutConstraint, AVObservationController;

@interface AVInlinePlaybackControlsViewController : AVPlayerControlsViewController {
    BOOL _visibilityStateHasBeenInitialized;
    BOOL _hasMadeInitialLayoutPass;
    BOOL _animatingVisibilityState;
    BOOL _skipButtonsAttached;
    BOOL _timelineControlAttached;
    BOOL _auxiliaryControlsViewAttached;
    NSArray *_skipButtonsConstraints;
    NSArray *_auxiliaryControlsViewConstraints;
    NSLayoutConstraint *_controlsContainerLeadingConstraint;
    NSLayoutConstraint *_controlsContainerTrailingConstraint;
    NSLayoutConstraint *_timelineContainerLeadingConstraint;
    NSLayoutConstraint *_timelineContainerTrailingConstraint;
    NSLayoutConstraint *_auxiliaryControlsContainerViewWidthConstraint;
    double _auxiliaryControlsViewLeftInset;
    NSView *_controlsCenterLineView;
    NSView *_controlsBaselineView;
    AVObservationController *_observationController;
}

@property (nonatomic) BOOL canUpdateControlsState;
@property (nonatomic) double animationDuration;
@property (readonly, nonatomic) NSLayoutAnchor *controlsBaseAnchor;
@property (readonly, nonatomic) NSLayoutAnchor *controlsCenterYAnchor;
@property (readonly, nonatomic) BOOL volumeButtonIncluded;
@property (readonly, nonatomic) NSView *controlsContainerView;
@property (readonly, nonatomic) AVDisplayModeControlsView *displayModeControlsView;
@property (readonly, nonatomic) NSView *playbackControlsContainerView;
@property (readonly, nonatomic) NSView *timelineControlContainerView;
@property (readonly, nonatomic) NSView *auxiliaryControlsContainerView;
@property (readonly, nonatomic) NSStackView *timelineControl;
@property (readonly, nonatomic) AVVolumeControlButton *volumeButton;
@property (readonly, nonatomic) AVAuxiliaryControlsView *auxiliaryControlsView;

+ (id)keyPathsForValuesAffectingVolumeButtonIncluded;

- (void)dealloc;
- (void).cxx_destruct;
- (double)minimumWidth;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)initialFirstResponder;
- (long long)layoutStyle;
- (void)controlsConfigurationDidChange;
- (id)controlsStyleIdentifier;
- (id)backgroundBackdropViewMaskImage;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (void)auxiliaryControlsViewIntrinsicContentSizeDidChange:(id)a0;
- (id)auxiliaryControlsView:(id)a0 overflowMenuItemsForControlView:(id)a1;
- (void)updateViewDebuggingState;
- (id)additionalControlsContentViews;
- (void)setupNextKeyView;
- (double)currentScrubberWidth;
- (double)currentViewWidth;
- (void)_setUpAuxiliaryControlsView;
- (void)_setUpDisplayModeContainerView;
- (void)_setUpControlsContainerView;
- (void)_setUpObservations;
- (void)_setUpPlaybackControls;
- (void)_setUpPlaybackControlsContainerView;
- (void)_setUpTimelineControlView;
- (void)_recalculateAuxiliaryControlsViewLayoutStateWithConstraintsToAdd:(id)a0 constraintsToRemove:(id)a1 viewsToHide:(id)a2 viewsToShow:(id)a3;
- (void)_recalculateSkipButtonLayoutStateWithConstraintsToAdd:(id)a0 constraintsToRemove:(id)a1 viewsToHide:(id)a2 viewsToShow:(id)a3;
- (void)_recalculateTimelineLayoutStateWithConstraintsToAdd:(id)a0 constraintsToRemove:(id)a1 viewsToHide:(id)a2 viewsToShow:(id)a3;
- (BOOL)_shouldAnimateTransition;
- (void)_transitionToNewConstraints:(id)a0 fromOldConstraints:(id)a1 hidingViews:(id)a2 showingViews:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)_updateVisibilityStateIfNeeded;
- (void)_updateAuxiliaryControlsStateIfNeeded;
- (void)_updateControlsState;
- (void)_updateShowsViewBackgrounds:(BOOL)a0;
- (void)_setUpDebugLineViewsIfNeeded;
- (void)_updateShowsControlsCenterLineView:(BOOL)a0;
- (void)_updateShowsControlsBaselineView:(BOOL)a0;

@end
