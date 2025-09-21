@class NSMutableIndexSet, NSMutableArray, NSMutableDictionary;
@protocol UXCollectionViewDelegateFlowLayout;

@interface KHUXCollectionViewFlowLayout : UXCollectionViewFlowLayout {
    BOOL _delegateSupplementaryViewDidBeginFloating;
    BOOL _delegateSupplementaryViewDidEndFloating;
}

@property (nonatomic) BOOL preparingForUpdates;
@property (readonly, nonatomic) NSMutableArray *layoutAttributesArray;
@property (readonly, nonatomic) NSMutableDictionary *headerAttributesByIndexPath;
@property (readonly, nonatomic) NSMutableIndexSet *floatingHeaderIndexSet;
@property (readonly, nonatomic) id<UXCollectionViewDelegateFlowLayout> delegateFlowLayout;
@property (nonatomic) BOOL showsSectionHeaderForSingleSection;
@property (nonatomic) BOOL showsSectionFooterForSingleSection;

+ (Class)layoutAccessibilityClass;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)init;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetForSectionAtIndex:(long long)a0;

@end
