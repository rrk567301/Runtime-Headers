@interface NSCollectionViewHeaderAccessibility : NSCollectionViewSupplementaryViewAccessibility

- (long long)accessibilityIndex;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityNextContentSibling;
- (id)accessibilityFirstContentSibling;
- (id)supplementaryView;

@end
