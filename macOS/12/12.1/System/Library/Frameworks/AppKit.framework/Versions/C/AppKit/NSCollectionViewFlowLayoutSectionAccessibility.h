@interface NSCollectionViewFlowLayoutSectionAccessibility : NSCollectionViewSectionAccessibility {
    id _supplementaryHeaderElement;
    id _supplementaryFooterElement;
}

- (id)accessibilityLabel;
- (BOOL)hasSupplementaryHeaderView;
- (id)supplementaryHeaderElement;
- (BOOL)hasSupplementaryFooterView;
- (id)supplementaryFooterElement;
- (id)supplementaryHeaderView:(BOOL)a0;
- (id)_makeSupplementaryHeaderView;
- (BOOL)_hasSupplementaryViewForElementKind:(id)a0;
- (id)supplementaryFooterView:(BOOL)a0;
- (BOOL)__hasSupplementaryViewForSelector:(SEL)a0 sizeDelegateBlock:(id /* block */)a1 sizeNoDelegateBlock:(id /* block */)a2;
- (id)_makeSupplementaryFooterView;

@end
