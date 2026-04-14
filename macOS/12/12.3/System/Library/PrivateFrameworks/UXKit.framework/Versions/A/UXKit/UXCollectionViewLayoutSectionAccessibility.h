@class UXCollectionView, UXCollectionViewLayoutAccessibility, NSArray;

@interface UXCollectionViewLayoutSectionAccessibility : NSAccessibilityElement {
    NSArray *_accessibilityVisibleChildren;
}

@property (readonly, weak, nonatomic) UXCollectionView *collectionView;
@property (readonly, weak, nonatomic) UXCollectionViewLayoutAccessibility *layoutAccessibility;
@property (readonly, nonatomic) unsigned long long sectionIndex;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)accessibilitySubrole;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (void)_dumpVisibleChildren;
- (void)accessibilityDidEndScrolling;
- (void)accessibilityInvalidateLayout;
- (void)accessibilityPrepareLayout;
- (id)accessibilityVisibleChildren;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)setAccessibilityVisibleChildren:(id)a0;
- (id)visibleSupplementaryViewsInSection:(long long)a0;
- (BOOL)accessibilityPerformScrollToVisible;
- (void)accessibilityPrepareForCollectionViewUpdates;
- (id)initWithLayoutAccessibility:(id)a0;
- (id)_siblingInDirection:(unsigned long long)a0 item:(id)a1;
- (id)visibleCellsInSection:(long long)a0;
- (id)siblingBeforeItem:(id)a0;
- (id)siblingAfterItem:(id)a0;
- (id)siblingAboveItem:(id)a0;
- (id)siblingBelowItem:(id)a0;

@end
