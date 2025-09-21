@class NSString, NSObject;
@protocol LUI2CollectionViewDelegate;

@interface LUI2CollectionView : NSCollectionView

@property unsigned long long focusedUserIndex;
@property (weak) NSObject<LUI2CollectionViewDelegate> *lui2Delegate;
@property (weak) id accessibilityButtonRepresentationTarget;
@property SEL accessibilityButtonRepresentationAction;
@property (retain) NSString *accessibilityButtonRepresentationLabel;

- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)mouseUp:(id)a0;
- (void)keyDown:(id)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityTitle;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
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
