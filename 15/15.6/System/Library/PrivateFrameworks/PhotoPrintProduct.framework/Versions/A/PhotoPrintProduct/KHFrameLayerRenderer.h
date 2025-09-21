@interface KHFrameLayerRenderer : KHLayerRenderer {
    char _layerShouldPositionAndSizeFrame;
    struct { struct { double x; double y; char isRelativeX; char isRelativeY; } origin; struct { double width; char isRelativeWidth; double height; char isRelativeHeight; } size; } _layerFrameRect;
    char _containLayerFrameWithinParentBounds;
    int _avoidOverlapMirroring;
}

+ (id)supportedAttributes;
+ (char)_frameCenterOverlapped:(id)a0;

- (char)_avoidOverlapByMirroringForFrame:(id)a0;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(char)a5;
- (id)layerFrameForParentFrame:(id)a0;
- (void)loadAttributes;

@end
