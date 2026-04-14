@class NSString, MLModel, NSArray, NSDictionary;

@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork

@property (readonly, nonatomic) MLModel *model;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSArray *inputNames;
@property (readonly, nonatomic) NSDictionary *featureCounts;
@property (readonly, nonatomic) NSArray *outputNames;
@property (readonly, nonatomic) NSDictionary *classCounts;

- (void).cxx_destruct;
- (id)initWithModelName:(id)a0 featureIndex:(long long)a1;
- (id)initWithModelName:(id)a0;

@end
