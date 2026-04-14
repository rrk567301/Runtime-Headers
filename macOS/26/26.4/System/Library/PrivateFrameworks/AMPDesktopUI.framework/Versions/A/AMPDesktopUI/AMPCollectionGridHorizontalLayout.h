@class NSString;

@interface AMPCollectionGridHorizontalLayout : AMPCollectionGridBaseLayout

@property (class, readonly) NSString *scrollPaddlePreviousIdentifier;
@property (class, readonly) NSString *scrollPaddleNextIdentifier;

@property (nonatomic) unsigned long long rowCount;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (long long)scrollDirection;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (long long)maxColumn;
- (double)enclosedViewWidth;
- (id)initWithMetrics:(id)a0 rowCount:(unsigned long long)a1;
- (id)layoutAttributesForItemAtIndex:(unsigned long long)a0 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)rowAtYCoord:(double)a0;

@end
