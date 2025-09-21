@class CalUIDelayedHoverButtonTableCellView;

@interface CalUIDelayedHoverButton : NSButton

@property char isHovered;
@property (weak) CalUIDelayedHoverButtonTableCellView *view;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (void)updateIsHovered:(char)a0;

@end
