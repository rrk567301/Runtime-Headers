@protocol AccessibleRolloverActionButtonTableCellViewDelegate;

@interface AccessibleRolloverActionButtonTableCellView : RolloverActionButtonTableCellView

@property (weak, nonatomic) id<AccessibleRolloverActionButtonTableCellViewDelegate> accessibilityDelegate;

- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;

@end
