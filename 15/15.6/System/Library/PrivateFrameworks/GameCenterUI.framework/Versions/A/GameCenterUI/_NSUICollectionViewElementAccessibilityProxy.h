@class _NSUICollectionViewItemKey, NSUICollectionView;

@interface _NSUICollectionViewElementAccessibilityProxy : NSAccessibilityProxy {
    NSUICollectionView *_collectionView;
    _NSUICollectionViewItemKey *_elementKey;
    unsigned long long _arrayIndex;
}

+ (id /* block */)indexPathComparator;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)indexPath;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityEnabledAttribute;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsEnabledAttributeSettable;
- (char)accessibilityIsIgnored;
- (char)accessibilityIsSelectedAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySelectedAttribute;
- (id)accessibilitySizeAttribute;
- (id)collectionView;
- (char)isSelectable;
- (char)isSelected;
- (id)layoutAttributes;
- (unsigned long long)arrayIndex;
- (id)initWithCollectionView:(id)a0 elementKey:(id)a1 arrayIndex:(unsigned long long)a2;

@end
