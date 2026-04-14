@class NSData;

@interface PISliderNetAdjustmentsRequest : PISliderNetBaseRequest

@property (retain, nonatomic) NSData *styleFeatureVectorData;
@property (retain, nonatomic) NSData *contentFeatureVectorData;
@property (nonatomic) double similarityGatingThreshold;

- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
