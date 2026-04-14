@class NSColor, CALayer;

@interface VTUITickMarkView : NSView {
    float _phase;
    NSColor *_redColor;
    NSColor *_blueColor;
    NSColor *_backgroundColor;
    CALayer *_checkMaskLayer;
    CALayer *_xMaskLayer;
}

@property float phase;
@property (nonatomic) int glyph;

+ (id)defaultAnimationForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cycleWithCompletion:(id /* block */)a0;
- (id)checkMaskLayer;
- (id)xMaskLayer;

@end
