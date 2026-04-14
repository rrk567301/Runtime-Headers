@interface WallpaperExtensionKit.VideoPlayerLayer : CALayer {
    void /* unknown type, empty encoding */ sampleBufferDisplayLayerPrimary;
    void /* unknown type, empty encoding */ sampleBufferDisplayLayerFader;
    void /* unknown type, empty encoding */ sampleBufferDisplayLayerStill;
    void /* unknown type, empty encoding */ sampleBufferDisplayLayerStillOriginal;
    void /* unknown type, empty encoding */ layerStillVisible;
    void /* unknown type, empty encoding */ lastMinUpcomingPTSHostTime;
    void /* unknown type, empty encoding */ enableDebugWriter;
    void /* unknown type, empty encoding */ enableDebugChart;
    void /* unknown type, empty encoding */ videoMLEnhancement;
    void /* unknown type, empty encoding */ player;
}

- (id)initWithLayer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
