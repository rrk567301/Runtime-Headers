@interface NSCollectionViewCompositionalLayoutSectionAccessibility : NSCollectionViewSectionAccessibility {
    id _supplementaryHeaderElement;
    id _supplementaryFooterElement;
}

- (void)dealloc;
- (id)supplementaryHeaderElement;
- (id)supplementaryFooterElement;
- (id)initWithCollectionViewAccessibility:(id)a0;
- (BOOL)hasSupplementaryHeaderView;
- (BOOL)hasSupplementaryFooterView;
- (id)supplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 makeIfNeeded:(BOOL)a2;
- (id)supplementaryFooterView:(BOOL)a0;
- (id)supplementaryHeaderView:(BOOL)a0;

@end
