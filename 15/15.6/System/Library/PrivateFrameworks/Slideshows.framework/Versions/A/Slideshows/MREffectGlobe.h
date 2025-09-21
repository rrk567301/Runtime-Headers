@class MRImageProvider;

@interface MREffectGlobe : MREffect {
    MRImageProvider *mMapProvider;
    MRImageProvider *mMarkerProvider;
    MRImageProvider *mGradientProvider;
    MRImageProvider *mShadingProvider;
    MRImageProvider *mStarsLProvider;
    MRImageProvider *mStarsRProvider;
}

- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (id)initWithEffectID:(id)a0;
- (char)isLoadedForTime:(double)a0;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
