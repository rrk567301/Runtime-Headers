@class NSAccessibilityWeakReferenceContainer, NSString, NSIndexPath, NSCollectionViewAccessibilityHelper;

@interface NSCollectionViewSupplementaryViewConcreteViewAccessibility : NSCollectionViewSupplementaryViewAccessibility {
    NSAccessibilityWeakReferenceContainer *_collectionViewAccessibilityHelper;
}

@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSIndexPath *indexPath;
@property (readonly, weak, nonatomic) NSCollectionViewAccessibilityHelper *collectionViewAccessibilityHelper;

- (void)dealloc;
- (id)accessibilityRole;
- (id)accessibilitySubrole;
- (id)accessibilityParent;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityNextContentSibling;
- (id)accessibilityFirstContentSibling;
- (id)accessibilityLastContentSibling;
- (id)supplementaryView;
- (id)initWithSectionAccessibility:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)initWithCollectionViewHelper:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)collectionViewAccessibilityHelper;

@end
