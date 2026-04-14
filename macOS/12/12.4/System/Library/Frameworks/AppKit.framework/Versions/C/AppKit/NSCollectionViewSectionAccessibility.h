@class NSAccessibilityWeakReferenceContainer, NSCollectionViewHeaderAccessibility, NSMutableDictionary, NSArray, NSCollectionViewFooterAccessibility, NSCollectionViewAccessibilityHelper, NSCollectionView;

@interface NSCollectionViewSectionAccessibility : NSAccessibilityElement {
    NSAccessibilityWeakReferenceContainer *_collectionViewAccessibility;
    NSMutableDictionary *_supplementaryElementsDictionary;
    NSArray *_accessibilityVisibleChildren;
}

@property (readonly, weak, nonatomic) NSCollectionView *collectionView;
@property (nonatomic) long long indexInCollectionView;
@property (readonly, weak, nonatomic) NSCollectionViewAccessibilityHelper *collectionViewAccessibility;
@property (readonly, nonatomic) NSCollectionViewHeaderAccessibility *supplementaryHeaderElement;
@property (readonly, nonatomic) NSCollectionViewFooterAccessibility *supplementaryFooterElement;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)accessibilitySubrole;
- (id)accessibilityParent;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (long long)accessibilityIndex;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (BOOL)isAccessibilityElement;
- (id)collectionView;
- (void)_dumpVisibleChildren;
- (void)accessibilityDidEndScrolling;
- (void)accessibilityInvalidateLayout;
- (void)accessibilityPrepareLayout;
- (id)supplementaryHeaderElement;
- (id)supplementaryFooterElement;
- (id)supplementaryElementOfKind:(id)a0 indexPath:(id)a1;
- (id)accessibilityVisibleChildren;
- (id)initWithCollectionViewAccessibility:(id)a0;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityTopLevelUIElement;
- (void)setAccessibilityVisibleChildren:(id)a0;
- (long long)accessibilityOrientation;
- (id)accessibilityWindow;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityNextContentSibling;
- (id)collectionViewAccessibility;
- (BOOL)hasSupplementaryHeaderView;
- (id)lastElementInSection:(BOOL)a0;
- (id)accessibilitySupplementaryElementsExcludingHeaderFooter;
- (BOOL)hasSupplementaryFooterView;
- (id)firstElementInSection:(BOOL)a0;
- (id)supplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 makeIfNeeded:(BOOL)a2;
- (id)_supplementaryView:(BOOL)a0 elementKind:(id)a1 indexPath:(id)a2;
- (id)supplementaryFooterView:(BOOL)a0;
- (id)supplementaryHeaderView:(BOOL)a0;
- (BOOL)_hasSupplementaryViewForElementKind:(id)a0;
- (id)_makeSupplementaryViewForElementKind:(id)a0 atIndexPath:(id)a1;
- (id)visibleItemsInSection:(long long)a0;
- (id)visibleSupplementaryViewsInSection:(long long)a0;
- (unsigned long long)offsetForSupplementaryHeaderView;
- (BOOL)accessibilityPerformScrollToVisible;

@end
