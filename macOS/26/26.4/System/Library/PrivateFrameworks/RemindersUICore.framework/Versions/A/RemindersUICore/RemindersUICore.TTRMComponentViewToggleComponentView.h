@interface RemindersUICore.TTRMComponentViewToggleComponentView : NSView

@property (nonatomic, weak) void /* function */ titleTextField;
@property (nonatomic, weak) void /* function */ checkbox;

- (id)accessibilityValue;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;

@end
