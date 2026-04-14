@interface NSCollectionViewFlowLayoutSectionAccessibility : NSCollectionViewSectionAccessibility {
    id _supplementaryHeaderElement;
    id _supplementaryFooterElement;
}

- (id)supplementaryHeaderElement;
- (id)supplementaryFooterElement;
- (BOOL)hasSupplementaryHeaderView;
- (BOOL)hasSupplementaryFooterView;
- (id)supplementaryFooterView:(BOOL)a0;
- (id)supplementaryHeaderView:(BOOL)a0;
- (BOOL)_hasSupplementaryViewForElementKind:(id)a0;
- (BOOL)__hasSupplementaryViewForSelector:(SEL)a0 sizeDelegateBlock:(id /* block */)a1 sizeNoDelegateBlock:(id /* block */)a2;

@end
