@class NSMutableArray;

@interface MOMediaViewCondensedLayout : MOMediaViewLayout {
    double _spacing;
    NSMutableArray *_attributes;
    NSMutableArray *_attributesBySections;
    NSMutableArray *_sectionAttributes;
    double _largestWidth;
    struct CGSize { double width; double height; } _contentSize;
}

@property double spacingRatio;
@property unsigned long long numberOfRows;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (unsigned long long)orientation;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)debuggingLayoutOptionsDescriptions;
- (id)indexPathsForSupplementaryViewsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportHeaders;
- (BOOL)supportStickiness;

@end
