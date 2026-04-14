@interface RemindersUICore.TTRMComponentViewToggleComponentView : NSView

@property (nonatomic, weak) void /* function */ titleTextField;
@property (nonatomic, weak) void /* function */ checkbox;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;

@end
