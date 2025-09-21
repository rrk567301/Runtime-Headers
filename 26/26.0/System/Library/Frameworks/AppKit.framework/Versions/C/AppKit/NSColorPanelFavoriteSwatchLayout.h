@interface NSColorPanelFavoriteSwatchLayout : NSCollectionViewLayout

@property struct CGSize { double width; double height; } itemSize;
@property double itemSpacing;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } sectionInset;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enclosingBounds;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)a0;
- (long long)numberOfItemsFittingInBoundsWidth:(double)a0;

@end
