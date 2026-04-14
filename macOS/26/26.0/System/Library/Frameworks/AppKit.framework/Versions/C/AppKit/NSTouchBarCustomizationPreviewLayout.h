@class NSArray;

@interface NSTouchBarCustomizationPreviewLayout : NSCollectionViewLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _escapeKeyRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _closeButtonRect;
    NSArray *_sectionLayouts;
}

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)prepareLayout;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)delegate;
- (id)_workaround_layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 canReturnNil:(BOOL)a2;
- (BOOL)canInsertItem:(id)a0 atIndexPath:(id)a1;
- (BOOL)canMoveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (id)canMoveItemAtIndexPath:(id)a0 toIndexPath:(id)a1 byRemovingItems:(id)a2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)overlappedIndexPathsForMovingItemAtIndexPath:(id)a0 toIndexPath:(id)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 primaryLocation:(struct CGPoint { double x0; double x1; })a3;

@end
