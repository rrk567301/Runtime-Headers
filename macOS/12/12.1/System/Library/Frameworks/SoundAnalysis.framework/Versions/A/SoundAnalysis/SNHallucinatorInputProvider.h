@class MLMultiArray, NSSet;

@interface SNHallucinatorInputProvider : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *feature;
@property (retain, nonatomic) MLMultiArray *tokenGroup;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;

@end
