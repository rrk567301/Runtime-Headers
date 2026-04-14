@class FCPersonalizationFeature;

@interface NTPersonalizationFeatureCTRLookupRequest : NSObject <NSCopying>

@property (copy, nonatomic) FCPersonalizationFeature *personalizationFeature;
@property (nonatomic) double clickPrior;
@property (nonatomic) double impressionPrior;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
