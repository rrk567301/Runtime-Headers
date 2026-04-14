@interface NSCollectionViewFooterAccessibility : NSCollectionViewSupplementaryViewAccessibility

- (long long)accessibilityIndex;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityNextContentSibling;
- (id)accessibilityLastContentSibling;
- (id)supplementaryView;

@end
