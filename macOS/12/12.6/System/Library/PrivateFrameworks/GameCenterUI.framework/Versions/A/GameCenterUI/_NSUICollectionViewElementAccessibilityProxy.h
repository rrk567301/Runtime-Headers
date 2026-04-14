@class _NSUICollectionViewItemKey, NSUICollectionView;

@interface _NSUICollectionViewElementAccessibilityProxy : NSAccessibilityProxy {
    NSUICollectionView *_collectionView;
    _NSUICollectionViewItemKey *_elementKey;
    unsigned long long _arrayIndex;
}

+ (id /* block */)indexPathComparator;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)indexPath;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)collectionView;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)isSelectable;
- (BOOL)isSelected;
- (id)accessibilitySelectedAttribute;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (id)layoutAttributes;
- (unsigned long long)arrayIndex;
- (id)initWithCollectionView:(id)a0 elementKey:(id)a1 arrayIndex:(unsigned long long)a2;

@end
