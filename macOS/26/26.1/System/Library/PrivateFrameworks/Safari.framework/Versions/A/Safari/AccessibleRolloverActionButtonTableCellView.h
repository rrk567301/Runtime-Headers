@protocol AccessibleRolloverActionButtonTableCellViewDelegate;

@interface AccessibleRolloverActionButtonTableCellView : RolloverActionButtonTableCellView

@property (weak, nonatomic) id<AccessibleRolloverActionButtonTableCellViewDelegate> accessibilityDelegate;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;

@end
