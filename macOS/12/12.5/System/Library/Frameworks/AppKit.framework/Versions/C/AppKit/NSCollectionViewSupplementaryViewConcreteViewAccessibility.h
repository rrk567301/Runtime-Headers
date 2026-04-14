@class NSAccessibilityWeakReferenceContainer, NSString, NSIndexPath, NSCollectionViewAccessibilityHelper;

@interface NSCollectionViewSupplementaryViewConcreteViewAccessibility : NSCollectionViewSupplementaryViewAccessibility {
    NSAccessibilityWeakReferenceContainer *_collectionViewAccessibilityHelper;
}

@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSIndexPath *indexPath;
@property (readonly, weak, nonatomic) NSCollectionViewAccessibilityHelper *collectionViewAccessibilityHelper;

- (void)dealloc;
- (id)accessibilitySubrole;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (id)initWithCollectionViewHelper:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityNextContentSibling;
- (id)initWithSectionAccessibility:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)supplementaryView;
- (id)collectionViewAccessibilityHelper;

@end
