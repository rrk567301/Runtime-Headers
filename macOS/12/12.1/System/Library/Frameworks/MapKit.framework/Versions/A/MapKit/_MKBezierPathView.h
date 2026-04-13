@class NSColor;

@interface _MKBezierPathView : NSView {
    NSColor *_fillColor;
    NSColor *_strokeColor;
}

+ (struct CGPath { } *)_createSmoothTransitionPathForBalloonRadius:(double)a0 tailLength:(double)a1;
+ (struct CGPath { } *)_createPathForBalloonRadius:(double)a0 tailLength:(double)a1;

- (void).cxx_destruct;
- (void)setPath:(struct CGPath { } *)a0;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)setFillColor:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)makeBackingLayer;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithBalloonRadius:(double)a0 tailLength:(double)a1 smoothTailTransition:(BOOL)a2;
- (void)setStrokeColor:(id)a0 width:(double)a1;
- (void)setPath:(struct CGPath { } *)a0 duration:(double)a1;
- (id)initWithOvalInSize:(struct CGSize { double x0; double x1; })a0;

@end
