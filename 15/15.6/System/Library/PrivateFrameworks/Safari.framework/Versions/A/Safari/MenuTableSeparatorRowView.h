@interface MenuTableSeparatorRowView : NSTableRowView

@property (nonatomic) double horizontalMargin;
@property (nonatomic) char ignoresHorizontalInset;

- (void)_setDefaultKeyViewLoop;
- (char)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
