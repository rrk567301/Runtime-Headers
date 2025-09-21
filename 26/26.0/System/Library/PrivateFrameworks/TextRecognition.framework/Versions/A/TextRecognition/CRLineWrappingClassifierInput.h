@class MLMultiArray, NSSet;

@interface CRLineWrappingClassifierInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *features;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithFeatures:(id)a0;
- (void).cxx_destruct;

@end
