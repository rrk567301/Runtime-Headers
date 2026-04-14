@class NSMutableArray;

@interface MOMediaViewEventLayout : MOMediaViewLayout {
    double _autofitRatio;
    NSMutableArray *_attributes;
    NSMutableArray *_attributesBySections;
    NSMutableArray *_sectionAttributes;
    double _largestHeight;
    struct CGSize { double width; double height; } _contentSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldBounds;
}

@property double spacing;
@property double rowHeight;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)invalidateLayout;
- (id)init;
- (unsigned long long)orientation;
- (void)prepareLayout;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)debuggingLayoutOptionsDescriptions;
- (id)indexPathsForSupplementaryViewsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportHeaders;
- (BOOL)supportStickiness;

@end
