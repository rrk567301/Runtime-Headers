@class SearchUICardSectionView;

@interface SearchUICardSectionCollectionViewItem : SearchUICollectionViewItem

@property (retain) SearchUICardSectionView *cardSectionView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (void)didUpdateRowModel;
- (char)highlightFrameMatchesHighlightView;
- (id)highlightReferenceView;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })preferredSeparatorInsetsForProposedInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateChevronVisible:(char)a0 leaveSpaceForChevron:(char)a1;
- (id)viewContainingContent;
- (id)viewForQuickLookZoomTransitionSource;

@end
