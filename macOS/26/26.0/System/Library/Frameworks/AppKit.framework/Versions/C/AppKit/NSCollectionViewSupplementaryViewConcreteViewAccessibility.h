@class NSAccessibilityWeakReferenceContainer, NSString, NSIndexPath, NSCollectionViewAccessibilityHelper;

@interface NSCollectionViewSupplementaryViewConcreteViewAccessibility : NSCollectionViewSupplementaryViewAccessibility {
    NSAccessibilityWeakReferenceContainer *_collectionViewAccessibilityHelper;
}

@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSIndexPath *indexPath;
@property (readonly, weak, nonatomic) NSCollectionViewAccessibilityHelper *collectionViewAccessibilityHelper;

- (void)dealloc;
- (id)accessibilityRole;
- (id)accessibilityLastContentSibling;
- (id)accessibilityNextContentSibling;
- (id)accessibilityFirstContentSibling;
- (id)accessibilityParent;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilitySubrole;
- (id)collectionViewAccessibilityHelper;
- (id)initWithCollectionViewHelper:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)initWithSectionAccessibility:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)supplementaryView;
- (id)supplementaryViewIfAlreadyMade;

@end
