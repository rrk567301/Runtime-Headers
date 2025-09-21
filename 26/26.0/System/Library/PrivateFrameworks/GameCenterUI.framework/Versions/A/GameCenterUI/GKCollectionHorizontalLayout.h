@class NSDictionary;

@interface GKCollectionHorizontalLayout : GKCollectionFocusingLayout

@property (retain, nonatomic) NSDictionary *itemAttributes;
@property (retain, nonatomic) NSDictionary *headerAttributes;
@property (nonatomic) double scrollStepIntegral;
@property (nonatomic) BOOL centersItemsInExcessSpace;
@property (nonatomic) BOOL alignItemsToTop;
@property (nonatomic) double extraSectionHeaderToCellSpace;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (double)maxHeaderHeight;
- (void)applyDefaults;
- (long long)firstValidSection;
- (long long)lastValidSection;

@end
