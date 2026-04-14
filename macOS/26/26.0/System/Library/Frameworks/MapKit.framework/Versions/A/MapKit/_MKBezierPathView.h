@class NSColor;

@interface _MKBezierPathView : NSView {
    NSColor *_fillColor;
    NSColor *_strokeColor;
}

+ (struct CGPath { } *)_createPathForBalloonRadius:(double)a0 tailLength:(double)a1;
+ (struct CGPath { } *)_createSmoothTransitionPathForBalloonRadius:(double)a0 tailLength:(double)a1;

- (void)setFillColor:(id)a0;
- (void)setPath:(struct CGPath { } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)makeBackingLayer;
- (id)initWithBalloonRadius:(double)a0 tailLength:(double)a1 smoothTailTransition:(BOOL)a2;
- (id)initWithOvalInSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPath:(struct CGPath { } *)a0 duration:(double)a1;
- (void)setStrokeColor:(id)a0 width:(double)a1;

@end
