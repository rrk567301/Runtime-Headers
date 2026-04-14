@class NSArray, NSString, NSView, NSLayoutConstraint, NSMutableArray, AVObservationController;

@interface AVDisplayModeControlsView : NSView <AVControlsContainerViewContentLayout, AVKeyViewLoopParticipant> {
    NSView *_displayModeContainerView;
    BOOL _viewHasBeenSetUp;
    NSMutableArray *_displayModeIncludedButtons;
    long long _maxControlsCount;
    long long _currentControlsCount;
    double _currentWidth;
    AVObservationController *_observationController;
    NSLayoutConstraint *_displayContainerLeadingConstraint;
    NSLayoutConstraint *_displayContainerTrailingConstraint;
    NSMutableArray *_trailingButtonLinkContraints;
}

@property (retain, nonatomic) NSArray *displayModeButtons;
@property (readonly) long long layoutStyle;
@property (readonly) struct CGSize { double x0; double x1; } intrinsicControlsContentViewSize;
@property (readonly) struct { double x0; double x1; double x2; double x3; } controlsContentViewMargin;
@property (readonly) double minimumWidth;
@property (readonly) double minimumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)a0;
- (id)firstKeyView;
- (void)setUpKeyViewLoopWithNextKeyView:(id)a0;
- (void)_startObservations;
- (void)_includeDisplayModeButtons;
- (void)_setUpDisplayModeContainerViewIfNeeded;
- (void)updateDisplayModeContainerViewIfNeeded:(double)a0;
- (void)setDisplayModeControlsInAvailableViewWidth:(double)a0;
- (void)_setMaxControlsShow:(long long)a0;
- (void)_resetDisplayModeConstraintsToIncludedControls;
- (void)_updateDisplayModeContraints;
- (void)addDisplayModeControls:(id)a0;

@end
