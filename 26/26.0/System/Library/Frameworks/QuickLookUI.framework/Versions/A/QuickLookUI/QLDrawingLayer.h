@protocol QLDrawingLayerDelegate;

@interface QLDrawingLayer : CALayer

@property (weak) id<QLDrawingLayerDelegate> drawingDelegate;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;

@end
