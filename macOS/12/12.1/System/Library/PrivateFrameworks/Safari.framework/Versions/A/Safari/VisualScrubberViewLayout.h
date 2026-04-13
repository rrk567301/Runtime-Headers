@class NSArray;

@interface VisualScrubberViewLayout : NSScrubberFlowLayout {
    NSArray *_computedItemWidths;
    NSArray *_computedItemOffsets;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })scrubberContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForSelectionChange;
- (BOOL)shouldInvalidateLayoutForChangeFromVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_numberOfItems;
- (long long)_selectedIndex;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndex:(long long)a0;
- (BOOL)_shouldShowItemAtIndex:(long long)a0;
- (void)_recomputeItemWidths;
- (void)_recomputeItemOffsets;

@end
