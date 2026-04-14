@interface AccessibleGroupedTextFieldWithVibrancy : TextFieldWithVibrancy

@property (nonatomic) long long siblingGroupingId;
@property (nonatomic, getter=isPrimaryElement) BOOL primaryElement;

- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityChildren;

@end
