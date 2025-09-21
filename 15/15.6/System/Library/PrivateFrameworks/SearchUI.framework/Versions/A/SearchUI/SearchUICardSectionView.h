@class NSViewController, NSView, NSString, SFCardSection, SearchUICardSectionRowModel;
@protocol SearchUIFeedbackDelegate;

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIHighlightTarget>

@property (retain, nonatomic) SearchUICardSectionRowModel *rowModel;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSView *chevronView;
@property char isCompactWidth;
@property (readonly, nonatomic) SFCardSection *section;
@property (readonly) NSViewController *embeddedViewController;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly, nonatomic) NSView *leadingView;
@property (readonly, nonatomic) NSView *leadingTextView;
@property (readonly, nonatomic) NSView *viewForQuickLookZoomTransitionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char highlightFrameMatchesHighlightView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } highlightFrame;
@property (readonly, nonatomic) double highlightFrameCornerRadius;
@property (readonly, nonatomic) NSView *highlightReferenceView;

+ (int)defaultSeparatorStyleForRowModel:(id)a0;
+ (id)dragSubtitleForCardSection:(id)a0;
+ (id)dragTitleForCardSection:(id)a0;
+ (char)fillsBackgroundWithContentForRowModel:(id)a0;
+ (char)hasLeadingImageForCardSection:(id)a0;
+ (char)prefersNoSeparatorAboveRowModel:(id)a0;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetsForStyle:(int)a0 cellView:(id)a1 leadingView:(id)a2 leadingTextView:(id)a3;
+ (char)supportsCustomUserReportRequestAfforance;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)initWithArrangedSubviews:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)setupContentView;
- (void)requestRemovalFromEnclosingView;
- (void)didInvalidateSizeAnimate:(char)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (char)needsInternalFocus;
- (void)openPunchout:(id)a0 triggerEvent:(unsigned long long)a1;
- (void)removeManualFocus;
- (void)returnKeyPressed;
- (char)setupManualFocus;
- (void)tabKeyPressed;
- (double)trailingMarginForAccessory:(id)a0;
- (void)updateChevronVisible:(char)a0 leaveSpaceForChevron:(char)a1;
- (void)updateWithRowModel:(id)a0;

@end
