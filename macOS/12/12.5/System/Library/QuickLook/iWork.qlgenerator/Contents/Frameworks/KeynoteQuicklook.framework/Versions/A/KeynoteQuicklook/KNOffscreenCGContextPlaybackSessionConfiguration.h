@interface KNOffscreenCGContextPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    struct CGSize { double width; double height; } _boundsSize;
}

- (id)description;
- (struct CGColorSpace { } *)colorSpace;
- (id)layerHost;
- (struct CGSize { double x0; double x1; })boundsSize;
- (double)pixelAspectRatio;
- (BOOL)isMetalEnabled;
- (BOOL)isSceneRenderingEnabled;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (id)initWithOffscreenCGContextBoundsSize:(struct CGSize { double x0; double x1; })a0;

@end
