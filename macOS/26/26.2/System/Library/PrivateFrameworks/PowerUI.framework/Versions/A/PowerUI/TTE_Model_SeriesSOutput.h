@class NSSet;

@interface TTE_Model_SeriesSOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double prediction;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithPrediction:(double)a0;

@end
