@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer

@property (retain) CAShapeLayer *handlesLayer;

- (void).cxx_destruct;
- (void)_addHandles;
- (void)_removeHandles;
- (char)_shouldShowHandles;
- (void)_updateHandles;
- (char)needsUpdateWhenDraggingStartsOrEnds;
- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)a0;

@end
