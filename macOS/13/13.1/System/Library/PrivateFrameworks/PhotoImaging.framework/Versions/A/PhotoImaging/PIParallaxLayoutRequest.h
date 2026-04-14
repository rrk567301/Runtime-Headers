@protocol PFParallaxLayoutConfiguration, NUImageBuffer, PFParallaxAssetRegions;

@interface PIParallaxLayoutRequest : NURenderRequest

@property (retain, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;
@property (retain, nonatomic) id<PFParallaxAssetRegions> layoutRegions;
@property (retain, nonatomic) id<NUImageBuffer> segmentationMatte;
@property (retain, nonatomic) id<NUImageBuffer> segmentationConfidenceMap;
@property (nonatomic) unsigned long long segmentationClassification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
