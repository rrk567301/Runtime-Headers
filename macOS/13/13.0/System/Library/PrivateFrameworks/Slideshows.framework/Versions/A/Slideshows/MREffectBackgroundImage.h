@class MRImageProvider, NSString;

@interface MREffectBackgroundImage : MREffect {
    MRImageProvider *mImageProvider;
    NSString *mClampingMode;
}

- (void)_cleanup;
- (void)setAssetPath:(id)a0;
- (void)_unload;
- (id)assetPath;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithEffectID:(id)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
