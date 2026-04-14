@class SearchUICardSectionView, NSView;
@protocol SearchUIResultAccessoryView;

@interface SearchUICardSectionCollectionViewItem : SearchUICollectionViewItem

@property (retain) SearchUICardSectionView *cardSectionView;
@property (retain) NSView<SearchUIResultAccessoryView> *accessoryView;
@property (nonatomic) BOOL isHovered;

- (void)setSelected:(BOOL)a0;
- (void)setCustomViewProvider:(id)a0;
- (void)updateTrackingAreas;
- (void)setAccessoryViewDelegate:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (void)didUpdateRowModel;
- (BOOL)highlightFrameMatchesHighlightView;
- (id)highlightReferenceView;
- (BOOL)needsInternalFocus;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })preferredSeparatorInsetsForProposedInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)removeManualFocus;
- (BOOL)setupManualFocus;
- (void)updateAccessoryView;
- (void)updateAccessoryViewVisibility;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateTabIndicator;
- (id)viewContainingContent;
- (id)viewForQuickLookZoomTransitionSource;

@end
