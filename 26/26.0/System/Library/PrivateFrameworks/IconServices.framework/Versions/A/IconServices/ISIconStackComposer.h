@interface ISIconStackComposer : NSObject

@property (readonly) struct CGImage { } *asset;
@property (readonly) long long assetAppearance;
@property (readonly) unsigned long long platform;

- (void)dealloc;
- (id)iconStackForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 desiredAssetAppearance:(long long)a2 returningGenerationReport:(id *)a3;
- (id)initWithLegacyAsset:(struct CGImage { } *)a0 assetAppearance:(long long)a1 platform:(unsigned long long)a2;
- (unsigned long long)segmentationIdiom;

@end
