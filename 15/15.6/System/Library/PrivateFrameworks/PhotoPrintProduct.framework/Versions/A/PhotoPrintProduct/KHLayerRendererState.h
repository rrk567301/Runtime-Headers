@interface KHLayerRendererState : KHLayerRenderer {
    int _blendMode;
    char _beginTransparencyLayer;
    char _endTransparencyLayer;
    char _disableShadowLayerRenderer;
}

+ (id)supportedAttributes;

- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(char)a5;
- (void)loadAttributes;

@end
