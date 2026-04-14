@class CALayer, QLOverlayProgressDeterminateShapeLayer, QLOverlayProgressIndeterminateLayer;

@interface QLOverlayProgressLayer : CALayer {
    CALayer *_contentLayer;
    QLOverlayProgressDeterminateShapeLayer *_determinateLoadingLayer;
    QLOverlayProgressIndeterminateLayer *_indeterminateLoadingLayer;
    CALayer *_maskLayer;
    BOOL _expanded;
}

@property (nonatomic) float progress;
@property BOOL expanded;

+ (id)defaultActionForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateIndeterminate;
- (void)_updateProgressLayers;
- (void)updateIndeterminate;

@end
