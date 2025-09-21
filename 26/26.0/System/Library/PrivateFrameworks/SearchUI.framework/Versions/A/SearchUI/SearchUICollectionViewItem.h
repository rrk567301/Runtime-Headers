@class SearchUIRowModel, SearchUICollectionViewItemView, NSView, NSString, SearchUISeparatorView;
@protocol SearchUICustomViewProvider, SearchUICollectionViewItemAccessoryViewDelegate, SearchUIFeedbackDelegate;

@interface SearchUICollectionViewItem : NSCollectionViewItem <SearchUIHighlightTarget, SearchUIBackgroundColorViewProtocol>

@property (nonatomic) long long resolvedFocusStyle;
@property (retain) NSView *selectionBackgroundView;
@property (retain) NSView *unempasizedSelectionBackgroundView;
@property (retain) NSView *selectionHaloView;
@property (retain) NSView *unempasizedSelectionHaloView;
@property (retain) SearchUISeparatorView *bottomSeparator;
@property double cornerRadius;
@property BOOL masksContent;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUICollectionViewItemAccessoryViewDelegate> accessoryViewDelegate;
@property (weak, nonatomic) id<SearchUICustomViewProvider> customViewProvider;
@property (readonly, nonatomic) SearchUIRowModel *rowModel;
@property (retain) SearchUICollectionViewItemView *view;
@property (nonatomic) BOOL selfSizingInTwoAxes;
@property (nonatomic) long long sectionBackgroundStyle;
@property (nonatomic) long long searchui_focusStyle;
@property (copy, nonatomic) NSString *customAccessibilityIdentifier;
@property (readonly, nonatomic) NSView *viewForQuickLookZoomTransitionSource;
@property (nonatomic) int sfSeparatorStyle;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) BOOL selectionShouldFillWidth;
@property (nonatomic) BOOL disableEmphasizedSelection;
@property (nonatomic) BOOL isSectionSelected;
@property (nonatomic) BOOL shouldDrawBackgroundWithoutSelection;
@property (readonly, nonatomic) BOOL highlightFrameMatchesHighlightView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } highlightFrame;
@property (readonly, nonatomic) double highlightFrameCornerRadius;
@property (readonly, nonatomic) NSView *highlightReferenceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectionAppearance;
- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)accessibilityIdentifier;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)backgroundView;
- (void)viewDidLayout;
- (id)accessibilityRole;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)isAccessibilitySelected;
- (void)updateSelectionAppearanceLayout;
- (void)didUpdateRowModel;
- (void)layoutBottomSeparator;
- (BOOL)needsInternalFocus;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })preferredSeparatorInsetsForProposedInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)removeManualFocus;
- (BOOL)setupManualFocus;
- (BOOL)shouldDrawBackgroundForSectionStyle:(long long)a0;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateCornerMasks;
- (void)updateCornerRadius:(double)a0;
- (void)updateSelectionCornerRadius;
- (void)updateSeparatorVisibility;
- (void)updateWithRowModel:(id)a0;

@end
