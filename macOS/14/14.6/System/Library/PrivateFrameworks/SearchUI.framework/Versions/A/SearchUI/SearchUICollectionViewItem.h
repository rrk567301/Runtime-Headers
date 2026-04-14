@class SearchUIRowModel, SearchUICollectionViewItemView, NSView, NSString, SearchUISeparatorView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUICollectionViewItem : NSCollectionViewItem <SearchUIHighlightTarget, SearchUIBackgroundColorViewProtocol>

@property (nonatomic) long long resolvedFocusStyle;
@property (retain) NSView *selectionBackgroundView;
@property (retain) NSView *unempasizedSelectionBackgroundView;
@property (retain) NSView *selectionHaloView;
@property (retain) NSView *unempasizedSelectionHaloView;
@property (retain) SearchUISeparatorView *bottomSeparator;
@property (readonly, nonatomic) SearchUIRowModel *rowModel;
@property (retain) SearchUICollectionViewItemView *view;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (nonatomic) BOOL selfSizingInTwoAxes;
@property (nonatomic) long long sectionBackgroundStyle;
@property (nonatomic) long long searchui_focusStyle;
@property (copy, nonatomic) NSString *customAccessibilityIdentifier;
@property (readonly, nonatomic) NSView *viewForQuickLookZoomTransitionSource;
@property (nonatomic) int sfSeparatorStyle;
@property (readonly, nonatomic) BOOL highlightFrameMatchesHighlightView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } highlightFrame;
@property (readonly, nonatomic) NSView *highlightReferenceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (id)backgroundView;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilitySelected;
- (void)loadView;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)viewDidLayout;
- (void)updateSelectionAppearance;
- (void)updateSelectionAppearanceLayout;
- (void)didUpdateRowModel;
- (void)layoutBottomSeparator;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })preferredSeparatorInsetsForProposedInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateSeparatorVisibility;
- (void)updateWithRowModel:(id)a0;

@end
