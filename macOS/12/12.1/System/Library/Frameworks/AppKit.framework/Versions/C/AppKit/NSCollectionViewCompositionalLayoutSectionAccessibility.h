@interface NSCollectionViewCompositionalLayoutSectionAccessibility : NSCollectionViewSectionAccessibility {
    id _supplementaryHeaderElement;
}

- (id)accessibilityLabel;
- (id)supplementaryHeaderElement;
- (id)supplementaryHeaderView:(BOOL)a0;
- (id)_makeSupplementaryHeaderView;

@end
