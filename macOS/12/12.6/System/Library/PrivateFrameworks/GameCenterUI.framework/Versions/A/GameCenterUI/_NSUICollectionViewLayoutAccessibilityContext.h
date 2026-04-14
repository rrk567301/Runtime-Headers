@class NSArray, NSUICollectionViewLayout, NSDictionary;

@interface _NSUICollectionViewLayoutAccessibilityContext : NSObject {
    NSUICollectionViewLayout *_layout;
    NSArray *_itemProxiesArray;
    NSDictionary *_itemIndexPathToProxyMap;
    NSArray *_supplementaryViewProxiesArray;
}

- (void).cxx_destruct;
- (unsigned long long)numberOfItems;
- (id)initWithLayout:(id)a0;
- (unsigned long long)numberOfChildren;
- (void)_obtainAccessibilityProxies;
- (id)_itemProxiesArray;
- (id)_supplementaryViewProxiesArray;
- (unsigned long long)numberOfSupplementaryViews;
- (id)accessibilityProxiesForChildrenInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityProxyForItemAtIndexPath:(id)a0;
- (unsigned long long)indexOfChildProxy:(id)a0;
- (id)accessibilityProxyForChildAtIndex:(unsigned long long)a0;
- (id)accessibilityProxiesForChildren;

@end
