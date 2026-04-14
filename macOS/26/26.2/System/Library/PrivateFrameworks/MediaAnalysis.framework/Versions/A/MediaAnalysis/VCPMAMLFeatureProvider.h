@class NSSet, NSString;

@interface VCPMAMLFeatureProvider : NSObject <MLFeatureProvider> {
    NSString *_featureName;
    struct __CVBuffer { } *_buffer;
}

@property (readonly, nonatomic) NSSet *featureNames;

+ (id)featureProviderWithCVPixelBuffer:(struct __CVBuffer { } *)a0 andFeatureName:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)featureValueForName:(id)a0;
- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 andFeatureName:(id)a1;

@end
