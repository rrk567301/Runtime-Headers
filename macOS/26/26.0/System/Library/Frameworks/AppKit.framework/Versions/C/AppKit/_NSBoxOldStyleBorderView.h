@interface _NSBoxOldStyleBorderView : NSView

@property unsigned long long borderType;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleCutoutRect;
@property BOOL shouldDrawFill;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isOneSidedGrooveBorder;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsUpdateLayer;

@end
