@class CALayer, CAGradientLayer;

@interface NSNinePartGradient : CALayer {
    CALayer *_centerLayer;
    CAGradientLayer *_gradientLayers[8];
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;

- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)init;

@end
