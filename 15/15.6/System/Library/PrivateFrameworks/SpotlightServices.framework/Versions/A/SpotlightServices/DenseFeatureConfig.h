@class NSString;

@interface DenseFeatureConfig : FeatureConfig

@property float defaultValue;
@property char normalization;
@property (retain, nonatomic) NSString *normalizationType;
@property float normalizationMin;
@property float normalizationMax;
@property char transform;
@property (retain, nonatomic) NSString *transformType;
@property (retain, nonatomic) NSString *originalFeatureName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 name:(id)a1;

@end
