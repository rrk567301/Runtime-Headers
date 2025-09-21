@interface _TtCC6Safari38CompletionListCollectionViewController20CollectionViewLayout : NSCollectionViewLayout {
    void /* unknown type, empty encoding */ itemLayoutAttributesCache;
    void /* unknown type, empty encoding */ supplementaryViewLayoutAttributesCache;
    void /* unknown type, empty encoding */ metrics;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;
@property (nonatomic, weak) void /* function */ controller;
@property (nonatomic) double contentHeight;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
