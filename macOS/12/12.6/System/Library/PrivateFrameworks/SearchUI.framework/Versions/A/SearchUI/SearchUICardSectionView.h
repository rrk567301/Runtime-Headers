@class NSViewController, NSView, NSString, SFCardSection, SearchUICardSectionRowModel;
@protocol SearchUIFeedbackDelegate;

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerViewDelegate>

@property (retain, nonatomic) SearchUICardSectionRowModel *rowModel;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSView *chevronView;
@property BOOL isCompactWidth;
@property (readonly, nonatomic) SFCardSection *section;
@property (readonly) NSViewController *embeddedViewController;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly, nonatomic) NSView *leadingView;
@property (readonly, nonatomic) NSView *leadingTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (id)dragTitleForCardSection:(id)a0;
+ (id)dragSubtitleForCardSection:(id)a0;
+ (int)defaultSeparatorStyleForCardSection:(id)a0;
+ (BOOL)fillsBackgroundWithContentForCardSection:(id)a0;
+ (BOOL)hasLeadingImageForCardSection:(id)a0;
+ (BOOL)prefersNoSeparatorAboveCardSection:(id)a0;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetsForStyle:(int)a0 cellView:(id)a1 leadingView:(id)a2 leadingTextView:(id)a3;

- (void).cxx_destruct;
- (void)resetCursorRects;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (id)sendFeedbackForPunchout:(id)a0 triggerEvent:(unsigned long long)a1;
- (void)didInvalidateSizeAnimate:(BOOL)a0;
- (void)openPunchout:(id)a0 triggerEvent:(unsigned long long)a1;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)requestRemovalFromEnclosingView;

@end
