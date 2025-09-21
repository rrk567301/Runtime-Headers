@class NSMutableIndexSet, NSMutableArray, NSMutableDictionary;
@protocol UXCollectionViewDelegateFlowLayout;

@interface KHUXCollectionViewFlowLayout : UXCollectionViewFlowLayout {
    char _delegateSupplementaryViewDidBeginFloating;
    char _delegateSupplementaryViewDidEndFloating;
}

@property (nonatomic) char preparingForUpdates;
@property (readonly, nonatomic) NSMutableArray *layoutAttributesArray;
@property (readonly, nonatomic) NSMutableDictionary *headerAttributesByIndexPath;
@property (readonly, nonatomic) NSMutableIndexSet *floatingHeaderIndexSet;
@property (readonly, nonatomic) id<UXCollectionViewDelegateFlowLayout> delegateFlowLayout;
@property (nonatomic) char showsSectionHeaderForSingleSection;
@property (nonatomic) char showsSectionFooterForSingleSection;

+ (Class)layoutAccessibilityClass;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (char)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetForSectionAtIndex:(long long)a0;

@end
