@class MLMultiArray, NSSet;

@interface sceneLuxB2DItpMLModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *feature_vector;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeature_vector:(id)a0;

@end
