@class NSAccessibilityWeakReferenceContainer, NSCollectionViewSectionAccessibility;

@interface NSCollectionViewSupplementaryViewAccessibility : NSAccessibilityElement {
    NSAccessibilityWeakReferenceContainer *_sectionAccessibility;
}

@property (readonly, weak, nonatomic) NSCollectionViewSectionAccessibility *sectionAccessibility;

- (void)dealloc;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityFirstContentSibling;
- (id)accessibilityLastContentSibling;
- (id)initWithSectionAccessibility:(id)a0;
- (id)sectionAccessibility;
- (id)supplementaryView;
- (id)supplementaryViewIfAlreadyMade;
- (BOOL)accessibilitySupplementaryViewShouldBeIgnored;
- (id)_supplementaryViewTextOnlyChild;

@end
