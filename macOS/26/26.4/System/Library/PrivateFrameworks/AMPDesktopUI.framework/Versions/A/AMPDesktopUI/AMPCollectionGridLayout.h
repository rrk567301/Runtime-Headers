@class NSView;

@interface AMPCollectionGridLayout : AMPCollectionGridBaseLayout

@property (nonatomic) double cachedSectionHeaderHeight;
@property (retain, nonatomic) NSView *sectionHeaderSizeTemplate;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (unsigned long long)sectionCount;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initWithMetrics:(id)a0;
- (double)sectionHeaderHeight;
- (BOOL)showSectionHeaders;
- (double)headerTopForSection:(long long)a0;
- (long long)itemCountForSection:(long long)a0;
- (double)itemTopForSection:(long long)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)layoutAttributesForSection:(long long)a0 topRow:(long long)a1 bottomRow:(long long)a2 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 includeHeader:(BOOL)a4;
- (void)prepareLayoutWithTotalViewWidth:(double)a0;
- (long long)rowCountForSection:(long long)a0;
- (long long)rowInSection:(long long)a0 atYCoord:(double)a1 pinned:(BOOL)a2;
- (long long)sectionAtYCoord:(double)a0;
- (double)totalHeightForSection:(long long)a0;
- (double)totalRowHeightForSection:(long long)a0;

@end
