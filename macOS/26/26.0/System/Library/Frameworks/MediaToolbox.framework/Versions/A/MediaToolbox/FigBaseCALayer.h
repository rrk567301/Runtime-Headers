@class CATextLayer, CAShapeLayer;

@interface FigBaseCALayer : CALayer <FigPiPableLayer> {
    CAShapeLayer *_DRMFallbackIconLayer;
    CATextLayer *_DRMFallbackTextLayer;
    struct CGSize { double width; double height; } _DRMFallbackIconSize;
    BOOL _enabledDRMFallback;
    id _snapshotObserverForAppKit;
    id _snapshotObserverForWebKit;
}

@property (nonatomic) BOOL preventsChangesToSublayerHierarchy;

+ (id)defaultActionForKey:(id)a0;

- (void)setNeedsDisplay;
- (id)actionForKey:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSublayer:(id)a0;
- (void)insertSublayer:(id)a0 below:(id)a1;
- (void)dealloc;
- (void)layoutSublayers;
- (id)init;
- (void)removeFromSuperlayer;
- (void)setSublayers:(id)a0;
- (void)insertSublayer:(id)a0 above:(id)a1;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (void)replaceSublayer:(id)a0 with:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutDRMLayerPositionsAndSizes;
- (float)getDisplayScale;
- (void)enableDRMFallback;

@end
