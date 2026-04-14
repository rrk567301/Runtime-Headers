@class CALayer, IKImageLayer;

@interface IKNavigationImageLayer : CALayer {
    CALayer *_imageBackgroundLayer;
    IKImageLayer *_imageLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visible2;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (double)scalingFactor;
- (void)updateBounds;
- (void)setup:(id)a0;
- (void)ikMouseDown:(id)a0;
- (void)adjustSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })navTransform;

@end
