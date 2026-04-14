@class TLKStackView, NSView, SearchUIAccessoryViewController, NSString, TLKDetailsView, SearchUIDetailedRowModel, NSMutableArray, SearchUILeadingViewController;
@protocol SearchUIDetailedViewDelegate, SearchUIFeedbackDelegate;

@interface SearchUIDetailedView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIAccessoryViewDelegate, TLKDetailsViewDelegate>

@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (retain, nonatomic) TLKStackView *innerContainer;
@property (retain, nonatomic) TLKStackView *buttonItemStackView;
@property (retain, nonatomic) TLKStackView *buttonAndDetailViewStackView;
@property (retain, nonatomic) NSMutableArray *leadingViewControllers;
@property (retain, nonatomic) SearchUILeadingViewController *currentLeadingViewController;
@property (retain, nonatomic) TLKDetailsView *detailsView;
@property (retain, nonatomic) NSMutableArray *accessoryViewControllers;
@property (retain, nonatomic) SearchUIAccessoryViewController *currentAccessoryViewController;
@property (nonatomic) BOOL isVerticalAlignment;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUIDetailedViewDelegate> buttonDelegate;
@property (readonly, nonatomic) NSView *leadingView;
@property (readonly, nonatomic) NSView *leadingTextView;
@property BOOL isCompactWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bannerBadgeForRowModel:(id)a0;
+ (void)addViewIfNecessary:(id)a0 toStackView:(id)a1 removeFromStackView:(id)a2;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)tlk_updateForAppearance:(id)a0;
- (void)footnoteButtonPressed;
- (void)updateWithRowModel:(id)a0;
- (id)initWithFeedbackDelegate:(id)a0;
- (double)trailingMarginForAccessoryViewController:(id)a0;
- (BOOL)arrangedViewMustCenter:(id)a0;

@end
