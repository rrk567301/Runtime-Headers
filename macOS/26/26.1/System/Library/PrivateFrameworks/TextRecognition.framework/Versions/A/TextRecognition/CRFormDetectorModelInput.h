@class MLMultiArray, NSSet;

@interface CRFormDetectorModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *array;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithMLMultiArray:(id)a0;

@end
