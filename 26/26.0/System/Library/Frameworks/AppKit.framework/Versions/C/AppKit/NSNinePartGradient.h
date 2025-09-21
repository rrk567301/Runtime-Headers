@class CALayer, CAGradientLayer;

@interface NSNinePartGradient : CALayer {
    CALayer *_centerLayer;
    CAGradientLayer *_gradientLayers[8];
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;

- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;

@end
