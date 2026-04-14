@class MLMultiArray, NSSet;

@interface FaceRecognizabilityFilterSVMDataScalerInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0;
- (id)featureValueForName:(id)a0;

@end
