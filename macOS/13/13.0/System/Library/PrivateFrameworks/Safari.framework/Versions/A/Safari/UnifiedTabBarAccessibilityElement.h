@protocol UnifiedTabBarAccessibilityElementDelegate;

@interface UnifiedTabBarAccessibilityElement : NSAccessibilityElement

@property (weak) id<UnifiedTabBarAccessibilityElementDelegate> delegate;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilitySubrole;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityValue;
- (id)initWithDelegate:(id)a0 accessibilityFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 accessibilityLabel:(id)a2 accessibilityIndex:(unsigned long long)a3;

@end
