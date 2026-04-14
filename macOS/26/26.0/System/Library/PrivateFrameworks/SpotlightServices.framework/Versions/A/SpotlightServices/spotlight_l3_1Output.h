@class MLMultiArray, NSSet;

@interface spotlight_l3_1Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *y;
@property (retain, nonatomic) MLMultiArray *id_features;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithY:(id)a0 id_features:(id)a1;

@end
