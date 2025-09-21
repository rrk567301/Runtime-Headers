@protocol AccessibleRolloverActionButtonTableCellViewDelegate;

@interface AccessibleRolloverActionButtonTableCellView : RolloverActionButtonTableCellView

@property (weak, nonatomic) id<AccessibleRolloverActionButtonTableCellViewDelegate> accessibilityDelegate;

- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;

@end
