@class NSData;

@interface PISliderNetAdjustmentsRequest : PISliderNetBaseRequest

@property (retain, nonatomic) NSData *styleFeatureVectorData;
@property (retain, nonatomic) NSData *contentFeatureVectorData;
@property (nonatomic) double similarityGatingThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
