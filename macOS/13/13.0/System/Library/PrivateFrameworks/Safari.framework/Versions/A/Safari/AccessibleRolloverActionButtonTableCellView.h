@protocol AccessibleRolloverActionButtonTableCellViewDelegate;

@interface AccessibleRolloverActionButtonTableCellView : RolloverActionButtonTableCellView

@property (weak, nonatomic) id<AccessibleRolloverActionButtonTableCellViewDelegate> accessibilityDelegate;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformPress;
- (void)setAccessibilityLabel:(id)a0;

@end
