@protocol AccessibleRolloverActionButtonTableCellViewDelegate;

@interface AccessibleRolloverActionButtonTableCellView : RolloverActionButtonTableCellView

@property (weak, nonatomic) id<AccessibleRolloverActionButtonTableCellViewDelegate> accessibilityDelegate;

- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setAccessibilityLabel:(id)a0;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformPress;

@end
