@class NSMutableDictionary;

@interface NSCollectionViewCompositionalLayoutSectionAccessibility : NSCollectionViewSectionAccessibility {
    id _supplementaryHeaderElement;
    id _supplementaryFooterElement;
    NSMutableDictionary *_supplementaryElementsDictionary;
}

- (void)dealloc;
- (id)accessibilityLabel;
- (id)supplementaryHeaderElement;
- (id)supplementaryFooterElement;
- (id)supplementaryElementOfKind:(id)a0 indexPath:(id)a1;
- (id)initWithCollectionViewAccessibility:(id)a0;
- (BOOL)hasSupplementaryHeaderView;
- (BOOL)hasSupplementaryFooterView;
- (id)supplementaryHeaderView:(BOOL)a0;
- (id)supplementaryFooterView:(BOOL)a0;
- (id)supplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 makeIfNeeded:(BOOL)a2;
- (id)_makeSupplementaryHeaderView;

@end
