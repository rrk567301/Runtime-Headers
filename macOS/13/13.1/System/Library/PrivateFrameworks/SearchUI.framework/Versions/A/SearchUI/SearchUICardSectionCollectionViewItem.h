@class SearchUICardSectionView;

@interface SearchUICardSectionCollectionViewItem : SearchUICollectionViewItem

@property (retain) SearchUICardSectionView *cardSectionView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (id)highlightReferenceView;
- (id)viewForQuickLookZoomTransitionSource;
- (BOOL)highlightFrameMatchesHighlightView;
- (void)didUpdateRowModel;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })preferredSeparatorInsetsForProposedInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
