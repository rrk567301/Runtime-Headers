@class AVDesktopButton, NSArray, AVAuxiliaryControl, NSMutableArray, AVObservationController;
@protocol AVAuxiliaryControlsViewDelegate;

@interface AVAuxiliaryControlsView : NSView <AVKeyViewLoopParticipant> {
    AVObservationController *_observationController;
    AVDesktopButton *_overflowControlButton;
    AVAuxiliaryControl *_overflowControl;
    NSArray *_controlsConstraints;
    NSArray *_controlSpacingConstraints;
    unsigned long long _animatingLayoutCount;
}

@property (readonly, nonatomic) NSMutableArray *controls;
@property (readonly, nonatomic) NSMutableArray *controlsExcludingOverflowOnlyControls;
@property (readonly, nonatomic) NSMutableArray *overflowOnlyControls;
@property (retain, nonatomic) NSArray *auxiliaryControlViews;
@property (weak, nonatomic) id<AVAuxiliaryControlsViewDelegate> delegate;
@property (nonatomic) double spacing;
@property (nonatomic) BOOL canShowControlOverflowButton;
@property (nonatomic) unsigned long long maxControlsShown;
@property (nonatomic) double leftInset;
@property (nonatomic) double animationDuration;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (void)viewWillMoveToWindow:(id)a0;
- (id)firstKeyView;
- (void)_updateControlsVisibilityStateIfNeeded;
- (void)setUpKeyViewLoopWithNextKeyView:(id)a0;
- (void)_setUpOverflowControlIfNeeded;
- (void)_updateOverflowControlVisibilityStateIfNeeded;
- (void)_updateLayoutConstraints;
- (void)_updateMaxControlsShownCountFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_updateSpacingLayoutConstraints;
- (void)_addAuxiliaryControl:(id)a0 withDisplayPriority:(float)a1;
- (void)_intrinsicContentSizeDidChange;
- (BOOL)_hasIncludedOverflowOnlyControl;
- (void)_setAuxiliaryControlView:(id)a0 toCollapsedState:(BOOL)a1;
- (void)_addControl:(id)a0 toListInDisplayOrder:(id)a1;
- (void)_beginLayoutAnimation;
- (BOOL)_canAnimateVisibility;
- (void)_endLayoutAnimation;
- (BOOL)_hasControlsThatDoNotFit;
- (void)_overflowButtonPressed:(id)a0;
- (id)_includedControlsThatDoNotFit;
- (void)addAuxiliaryControlView:(id)a0 withDisplayPriority:(float)a1;

@end
