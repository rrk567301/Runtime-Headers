@class NSAccessibilityWeakReferenceContainer, NSCollectionViewHeaderAccessibility, NSMutableDictionary, NSArray, NSCollectionViewFooterAccessibility, NSCollectionViewAccessibilityHelper, NSCollectionView;

@interface NSCollectionViewSectionAccessibility : NSAccessibilityElement {
    NSAccessibilityWeakReferenceContainer *_collectionViewAccessibility;
    NSMutableDictionary *_supplementaryElementsDictionary;
    id _supplementaryHeaderElement;
    id _supplementaryFooterElement;
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
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (long long)accessibilityIndex;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (BOOL)isAccessibilityElement;
- (id)collectionView;
- (void)accessibilityDidEndScrolling;
- (void)accessibilityInvalidateLayout;
- (void)accessibilityPrepareLayout;
- (void)_dumpVisibleChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilitySubrole;
- (id)accessibilityVisibleChildren;
- (id)accessibilityChildren;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityTopLevelUIElement;
- (void)setAccessibilityVisibleChildren:(id)a0;
- (long long)accessibilityOrientation;
- (id)accessibilityWindow;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityNextContentSibling;
- (id)accessibilityFirstContentSibling;
- (id)accessibilityLastContentSibling;
- (id)collectionViewAccessibility;
- (id)initWithCollectionViewAccessibility:(id)a0;
- (id)lastElementInSection:(BOOL)a0;
- (id)firstElementInSection:(BOOL)a0;
- (id)visibleSupplementaryViewsInSection:(long long)a0;
- (id)visibleItemsInSection:(long long)a0;
- (BOOL)_hasSupplementaryViewForElementKind:(id)a0;
- (id)_makeSupplementaryViewForElementKind:(id)a0 atIndexPath:(id)a1;
- (unsigned long long)offsetForSupplementaryHeaderView;
- (id)supplementaryHeaderView:(BOOL)a0;
- (id)supplementaryFooterView:(BOOL)a0;
- (id)supplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 makeIfNeeded:(BOOL)a2;
- (id)supplementaryHeaderElement;
- (id)supplementaryFooterElement;
- (BOOL)hasSupplementaryHeaderView;
- (BOOL)hasSupplementaryFooterView;
- (id)supplementaryElementOfKind:(id)a0 indexPath:(id)a1;
- (id)accessibilitySupplementaryElementsExcludingHeaderFooter;
- (BOOL)accessibilityPerformScrollToVisible;

@end
