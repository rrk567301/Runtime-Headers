@class KNAnimationScreenEnvironment;
@protocol KNPlaybackLayerHost;

@interface KNLayerPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    KNAnimationScreenEnvironment *_screenEnvironment;
    char _isMetalEnabled;
    char _isSceneRenderingEnabled;
    id<KNPlaybackLayerHost> _layerHost;
    struct CGSize { double width; double height; } _boundsSize;
}

- (id)description;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })boundsSize;
- (struct CGColorSpace { } *)colorSpace;
- (id)layerHost;
- (double)pixelAspectRatio;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (id)initWithLayerHost:(id)a0 isMetalEnabled:(char)a1 isSceneRenderingEnabled:(char)a2 isHDREnabled:(char)a3;
- (char)isMetalEnabled;
- (char)isSceneRenderingEnabled;

@end
