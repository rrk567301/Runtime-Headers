@class NSSet, NSString;

@interface VCPMAMLFeatureProvider : NSObject <MLFeatureProvider> {
    NSString *_featureName;
    struct __CVBuffer { } *_buffer;
}

@property (readonly, nonatomic) NSSet *featureNames;

+ (id)featureProviderWithCVPixelBuffer:(struct __CVBuffer { } *)a0 andFeatureName:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)featureValueForName:(id)a0;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 andFeatureName:(id)a1;

@end
