@protocol QLDrawingLayerDelegate;

@interface QLDrawingLayer : CALayer

@property id<QLDrawingLayerDelegate> drawingDelegate;

- (void)drawInContext:(struct CGContext { } *)a0;

@end
