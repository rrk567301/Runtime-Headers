@class NSView, NSCollectionView, NSCollectionViewItem;

@interface NSCollectionViewChildProxy : NSAccessibilityProxy {
    unsigned long long _index;
    NSCollectionView *_collectionView;
    NSCollectionViewItem *_item;
    NSView *_realElement;
}

+ (id)proxyForItemAtIndex:(unsigned long long)a0 collectionView:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)item;
- (id)accessibilityParentAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (id)realElement;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)initWithIndex:(unsigned long long)a0 collectionView:(id)a1;

@end
