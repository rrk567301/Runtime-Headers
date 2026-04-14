@protocol NUScalePolicy;

@interface NUVisionSegmentationRequest : NURenderRequest

@property (nonatomic) long long segmentationType;
@property (nonatomic) BOOL produceConfidenceMap;
@property (nonatomic) long long visionSegmentationPolicy;
@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;

+ (void)warmUp;

- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)takePropertiesFromRequest:(id)a0;

@end
