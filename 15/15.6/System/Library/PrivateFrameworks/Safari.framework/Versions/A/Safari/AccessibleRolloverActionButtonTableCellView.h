@protocol AccessibleRolloverActionButtonTableCellViewDelegate;

@interface AccessibleRolloverActionButtonTableCellView : RolloverActionButtonTableCellView

@property (weak, nonatomic) id<AccessibleRolloverActionButtonTableCellViewDelegate> accessibilityDelegate;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (char)accessibilityPerformPress;
- (id)accessibilityRole;
- (char)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)a0;

@end
