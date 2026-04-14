@class PIParallaxStyle, PFPosterOrientedLayout, NSCache;
@protocol PISegmentationItem;

@interface PIParallaxLayerStackRequest : NURenderRequest

@property (readonly, nonatomic) BOOL shouldUseVideoFrame;
@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) PIParallaxStyle *style;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (retain, nonatomic) PFPosterOrientedLayout *auxiliaryLayout;
@property (nonatomic) long long layerStackMode;
@property (nonatomic) unsigned long long allowedLayoutStrategies;
@property (nonatomic) BOOL headroomBlurEnabled;
@property (nonatomic) BOOL useLegacyHeadroom;
@property (nonatomic) BOOL headroomDisabled;
@property (retain, nonatomic) NSCache *cache;
@property (nonatomic, getter=isSettlingEffectEnabled) BOOL settlingEffectEnabled;
@property (nonatomic, getter=isSpatialPhotoEnabled) BOOL spatialPhotoEnabled;
@property (nonatomic, getter=userAdjustedVisibleFrame) BOOL userAdjustedVisibleFrame;
@property (copy, nonatomic) id /* block */ spatialPhotoProgressHandler;
@property (nonatomic, getter=isForegroundLayerEnabled) BOOL foregroundLayerEnabled;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)initWithSegmentationItem:(id)a0;

@end
