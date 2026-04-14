@class PIParallaxStyle, PFParallaxLayout, NSCache;
@protocol PISegmentationItem;

@interface PIParallaxLayerStackRequest : NURenderRequest

@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) PIParallaxStyle *style;
@property (retain, nonatomic) PFParallaxLayout *layout;
@property (nonatomic) long long layerStackMode;
@property (retain, nonatomic) NSCache *cache;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (id)initWithSegmentationItem:(id)a0;

@end
