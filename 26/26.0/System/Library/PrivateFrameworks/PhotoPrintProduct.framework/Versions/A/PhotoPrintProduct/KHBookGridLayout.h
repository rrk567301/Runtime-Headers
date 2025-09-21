@class NSDictionary, NSMutableArray;
@protocol KHBookGridLayoutDelegate;

@interface KHBookGridLayout : UXCollectionViewLayout {
    struct { unsigned char delegateImplementsReferenceSizeForItemInSection : 1; unsigned char delegateImplementsSizeForItemAtIndexPath : 1; unsigned char delegateImplementsItemHiddenAtIndexPath : 1; unsigned char delegateImplementsLassoSelectionIndicesForProposedSelectionIndexPath : 1; } _layoutDelegateFlags;
    BOOL _needsDelegateFlagsUpdate;
}

@property (retain, nonatomic) NSDictionary *layoutAttributesCache;
@property (retain, nonatomic) NSMutableArray *columnsPositions;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) long long currentNumberOfColumns;
@property (nonatomic) struct CGSize { double width; double height; } referenceItemSize;
@property (nonatomic) double contentHeightCache;
@property (readonly, nonatomic) id<KHBookGridLayoutDelegate> delegate;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) long long adjoiningOrientation;

+ (Class)invalidationContextClass;
+ (Class)layoutAccessibilityClass;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (void)_setCollectionView:(id)a0;
- (id)indexPaths;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)indexPathOfItemAbove:(id)a0;
- (id)indexPathOfItemAfter:(id)a0;
- (id)indexPathOfItemBefore:(id)a0;
- (id)indexPathOfItemBelow:(id)a0;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;
- (id)_horizontalLayoutAttributesForIndexPaths:(id)a0;
- (id)_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 includeSpacing:(BOOL)a1;
- (id)_verticalLayoutAttributesForIndexPaths:(id)a0;
- (BOOL)indexPathIsLeading:(id)a0;
- (BOOL)indexPathIsLeft:(id)a0;
- (id)kh_layoutAttributesForDropTargetAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)kh_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withItemAtIndexPath:(id)a1 exchangedWithIndexPath:(id)a2;
- (id)kh_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withItemAtIndexPath:(id)a1 movedToIndexPath:(id)a2;
- (id)kh_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 exchangedWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)kh_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 movedToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)layoutAttributesForIndexPaths:(id)a0;

@end
