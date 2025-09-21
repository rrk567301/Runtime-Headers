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
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityLastContentSibling;
- (id)accessibilityNextContentSibling;
- (void)_dumpVisibleChildren;
- (char)_hasSupplementaryViewForElementKind:(id)a0;
- (id)_makeSupplementaryViewForElementKind:(id)a0 atIndexPath:(id)a1;
- (id)accessibilityActionNames;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityChildren;
- (void)accessibilityDidEndScrolling;
- (id)accessibilityFirstContentSibling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (long long)accessibilityIndex;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (void)accessibilityInvalidateLayout;
- (id)accessibilityLabel;
- (long long)accessibilityOrientation;
- (id)accessibilityParent;
- (void)accessibilityPerformAction:(id)a0;
- (char)accessibilityPerformScrollToVisible;
- (void)accessibilityPrepareLayout;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityRole;
- (char)accessibilityShouldUseUniqueId;
- (id)accessibilitySubrole;
- (id)accessibilitySupplementaryElementsExcludingHeaderFooter;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityVisibleChildren;
- (id)accessibilityWindow;
- (id)collectionView;
- (id)collectionViewAccessibility;
- (id)firstElementInSection:(char)a0;
- (char)hasSupplementaryFooterView;
- (char)hasSupplementaryHeaderView;
- (id)initWithCollectionViewAccessibility:(id)a0;
- (char)isAccessibilityElement;
- (id)lastElementInSection:(char)a0;
- (unsigned long long)offsetForSupplementaryHeaderView;
- (void)setAccessibilityVisibleChildren:(id)a0;
- (id)supplementaryElementOfKind:(id)a0 indexPath:(id)a1;
- (id)supplementaryFooterElement;
- (id)supplementaryFooterView:(char)a0;
- (id)supplementaryHeaderElement;
- (id)supplementaryHeaderView:(char)a0;
- (id)supplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 makeIfNeeded:(char)a2;
- (id)visibleItemsInSection:(long long)a0;
- (id)visibleSupplementaryViewsInSection:(long long)a0;

@end
