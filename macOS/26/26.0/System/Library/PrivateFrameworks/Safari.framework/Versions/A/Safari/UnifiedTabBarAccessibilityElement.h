@class UnifiedTabBarItem;
@protocol UnifiedTabBarAccessibilityElementDelegate;

@interface UnifiedTabBarAccessibilityElement : NSAccessibilityElement

@property (readonly, nonatomic) UnifiedTabBarItem *tabBarItem;
@property (weak) id<UnifiedTabBarAccessibilityElementDelegate> delegate;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilitySubrole;
- (id)initWithUnifiedTabBarItem:(id)a0 delegate:(id)a1 accessibilityFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 accessibilityLabel:(id)a3 accessibilityIndex:(unsigned long long)a4;

@end
