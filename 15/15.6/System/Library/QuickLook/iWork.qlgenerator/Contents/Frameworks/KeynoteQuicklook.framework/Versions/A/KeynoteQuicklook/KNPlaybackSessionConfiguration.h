@protocol KNPlaybackLayerHost;

@interface KNPlaybackSessionConfiguration : NSObject

@property (nonatomic) char supportsHDR;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } boundsSize;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) char isWideGamut;
@property (readonly, nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) char isRealtime;
@property (readonly, nonatomic) char isMetalEnabled;
@property (readonly, nonatomic) char isSceneRenderingEnabled;
@property (readonly, nonatomic) id<KNPlaybackLayerHost> layerHost;

+ (char)canEnableMetal;
+ (id)configurationWithLayerHost:(id)a0 renderingMode:(long long)a1 shouldEnableHDR:(char)a2;
+ (id)configurationWithOffscreenCGContextBoundsSize:(struct CGSize { double x0; double x1; })a0 shouldEnableHDR:(char)a1;
+ (char)isColorSpaceWideGamut:(struct CGColorSpace { } *)a0;

- (double)canvasViewScaleForUnscaledSize:(struct CGSize { double x0; double x1; })a0;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (id)initSuperclass;

@end
