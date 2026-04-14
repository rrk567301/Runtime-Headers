@interface LUI2DarkenView : NSView

@property double opacity;

- (double)opacity;
- (id)initWithCoder:(id)a0;
- (void)setOpacity:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_setupDarkenView;

@end
