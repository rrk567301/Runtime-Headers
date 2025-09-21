@class CAShapeLayer;

@interface KHChevronButton : NSControl {
    CAShapeLayer *_chevronLayer;
}

@property (nonatomic) double animationDuration;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(int)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)effectiveAppearanceDidChange;

@end
