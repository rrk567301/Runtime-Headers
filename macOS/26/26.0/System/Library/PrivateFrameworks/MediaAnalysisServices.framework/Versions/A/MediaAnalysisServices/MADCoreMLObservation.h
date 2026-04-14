@class NSString, MLFeatureValue;

@interface MADCoreMLObservation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) MLFeatureValue *featureValue;

+ (id)entryWithFeatureName:(id)a0 featureValue:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeatureName:(id)a0 featureValue:(id)a1;

@end
