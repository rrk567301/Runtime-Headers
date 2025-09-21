@interface AccessibleGroupedTextFieldWithVibrancy : TextFieldWithVibrancy

@property (nonatomic) long long siblingGroupingId;
@property (nonatomic, getter=isPrimaryElement) BOOL primaryElement;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;

@end
