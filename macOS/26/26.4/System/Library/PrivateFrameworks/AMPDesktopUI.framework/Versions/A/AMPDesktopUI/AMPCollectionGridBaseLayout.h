@class NSView, AMPDynamicGridMetrics;

@interface AMPCollectionGridBaseLayout : NSCollectionViewLayout

@property (retain, nonatomic) AMPDynamicGridMetrics *gridMetrics;
@property (nonatomic) double mLastCalculatedViewWidth;
@property (nonatomic) double currentMargins;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double gutterSize;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double sectionSpacing;
@property (nonatomic) unsigned long long currentColumnCount;
@property (retain, nonatomic) NSView *sizeTemplate;

- (unsigned long long)sectionCount;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isRTL;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initWithMetrics:(id)a0;
- (void)prepareLayout;
- (double)sectionHeaderHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enclosingBounds;
- (BOOL)showSectionHeaders;
- (long long)maxColumn;
- (long long)columnAtXCoord:(double)a0;
- (double)enclosedViewWidth;
- (long long)itemCountForSection:(long long)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)leadingForColumn:(long long)a0 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)leadingForColumnUnflipped:(long long)a0;
- (void)prepareLayoutWithTotalViewWidth:(double)a0;

@end
