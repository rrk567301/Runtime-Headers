@interface KNOffscreenCGContextPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    struct CGSize { double width; double height; } _boundsSize;
}

- (id)description;
- (struct CGSize { double x0; double x1; })boundsSize;
- (struct CGColorSpace { } *)colorSpace;
- (id)layerHost;
- (double)pixelAspectRatio;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (id)initWithOffscreenCGContextBoundsSize:(struct CGSize { double x0; double x1; })a0 isHDREnabled:(char)a1;
- (char)isMetalEnabled;
- (char)isSceneRenderingEnabled;

@end
