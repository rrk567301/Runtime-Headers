@class NSView, NSLayoutConstraint, NSLayoutGuide, CalUIFastStackView;
@protocol CalUIAccordionViewControllerDelegate;

@interface CalUIAccordionViewController : NSViewController

@property (retain) NSView *scrollHandleView;
@property (retain) CalUIFastStackView *overlayStackView;
@property (retain) NSView *effectsView;
@property (retain) CalUIFastStackView *stackView;
@property long long indexOfLeadingView;
@property long long levelOfLeadingView;
@property (retain) NSLayoutConstraint *centerViewAlignmentConstraint;
@property (retain) NSLayoutGuide *centerViewOffsetGuide;
@property (retain) NSLayoutConstraint *centerViewSizeConstraint;
@property (weak) id<CalUIAccordionViewControllerDelegate> delegate;
@property long long orientation;
@property (nonatomic) long long level;
@property (nonatomic) double viewSize;
@property (nonatomic) double indexAndOffset;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)reload;
- (void)updateView;
- (void)initViews;
- (void)viewFrameDidChange:(id)a0;
- (long long)_centerIndex;
- (void)_loadAdditionalTrailingView;
- (void)_validateDisplayProperties;
- (id)viewAtIndex:(long long)a0;
- (double)_offsetFromIndexAndOffset:(double)a0;
- (void)loadAdditionalViewsIfNeeded;
- (long long)_maxVisibleViewsPerSide;
- (long long)_countOfLeadingViews;
- (void)_removeLeadingView;
- (void)_loadAdditionalLeadingView;
- (long long)_countOfTrailingViews;
- (void)_removeTrailingView;
- (BOOL)_delegateSupportsOverlays;
- (long long)_indexFromIndexAndOffset:(double)a0;
- (long long)_convertToStackViewIndex:(long long)a0;
- (long long)firstVisibleIndex;
- (long long)lastVisibleIndex;
- (id)viewOverlayAtIndex:(long long)a0;
- (long long)_convertFromStackViewIndex:(long long)a0;
- (id)viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)indexAndOffsetOfPoint:(struct CGPoint { double x0; double x1; })a0;

@end
