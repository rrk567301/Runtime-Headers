@class NSCollectionViewLayout, NSArray, NSMutableArray, NSCollectionView;

@interface NSCollectionViewAccessibilityHelper : NSAccessibilityElement {
    id _layout;
    NSMutableArray *__sectionCache;
}

@property (weak, nonatomic) NSCollectionViewLayout *layout;
@property (nonatomic) unsigned long long _sectionCacheOffset;
@property (readonly, nonatomic) NSMutableArray *_sectionCache;
@property (nonatomic) Class sectionAccessibilityClass;
@property (readonly, weak, nonatomic) NSCollectionView *collectionView;
@property (readonly, copy, nonatomic) NSArray *accessibilityVisibleChildren;
@property (copy, nonatomic) NSArray *accessibilitySelectedCells;

- (void)dealloc;
- (id)accessibilitySubrole;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (void)_dumpVisibleChildren;
- (void)accessibilityDidEndScrolling;
- (void)accessibilityInvalidateLayout;
- (void)accessibilityPrepareLayout;
- (id)_visibleSections;
- (void)_trimSectionCacheToVisibleSections:(id)a0;
- (id)_dequeueSectionWithIndex:(unsigned long long)a0;
- (long long)accessibilityRowCount;
- (id)initWithLayout:(id)a0;
- (id)accessibilityParentForItem:(id)a0;
- (id)accessibilityParentForView:(id)a0;
- (id)previousSectionForSection:(id)a0;
- (id)nextSectionForSection:(id)a0;
- (id)accessibilityRoleDescription;
- (long long)accessibilityColumnCount;
- (id)accessibilitySelectedChildren;
- (void)setAccessibilitySelectedChildren:(id)a0;
- (void)accessibilitySelectedChildrenDidChange;

@end
