@interface KNOffscreenCGContextPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    struct CGSize { double width; double height; } _boundsSize;
}

- (id)layerHost;
- (struct CGColorSpace { } *)colorSpace;
- (double)pixelAspectRatio;
- (id)description;
- (struct CGSize { double x0; double x1; })boundsSize;
- (BOOL)configurationShouldUpdateWithUpdatedLayerScreenEnvironment;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (id)initWithOffscreenCGContextBoundsSize:(struct CGSize { double x0; double x1; })a0 isHDREnabled:(BOOL)a1;
- (BOOL)isMetalEnabled;
- (BOOL)isSceneRenderingEnabled;

@end
