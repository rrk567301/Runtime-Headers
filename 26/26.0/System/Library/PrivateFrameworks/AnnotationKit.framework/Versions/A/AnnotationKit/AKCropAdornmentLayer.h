@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer

@property (retain) CAShapeLayer *cornerHandlesLayer;
@property (retain) CAShapeLayer *edgeHandlesLayer;

- (void).cxx_destruct;
- (void)_addHandles;
- (void)_removeHandles;
- (BOOL)_shouldShowHandles;
- (void)_updateHandles;
- (BOOL)needsUpdateWhenDraggingStartsOrEnds;
- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)a0;

@end
