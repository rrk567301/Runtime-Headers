@class NSString, NSObject;
@protocol LUI2CollectionViewDelegate;

@interface LUI2CollectionView : NSCollectionView

@property unsigned long long focusedUserIndex;
@property (weak) NSObject<LUI2CollectionViewDelegate> *lui2Delegate;
@property (weak) id accessibilityButtonRepresentationTarget;
@property SEL accessibilityButtonRepresentationAction;
@property (retain) NSString *accessibilityButtonRepresentationLabel;

- (void)mouseUp:(id)a0;
- (id)accessibilityRole;
- (void)keyDown:(id)a0;
- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (long long)accessibilityColumnCount;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (long long)accessibilityRowCount;
- (id)accessibilitySections;
- (id)accessibilitySubrole;
- (id)accessibilityVisibleChildren;
- (BOOL)_shouldOverrideAccessibility;
- (id)userViewAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
