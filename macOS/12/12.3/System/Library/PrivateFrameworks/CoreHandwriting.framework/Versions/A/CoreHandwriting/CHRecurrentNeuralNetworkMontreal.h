@class NSArray, NSDictionary;

@interface CHRecurrentNeuralNetworkMontreal : CHRecurrentNeuralNetwork

@property (readonly, nonatomic) struct MontrealNeuralNetwork { } *_model;
@property (readonly, nonatomic) NSArray *inputNames;
@property (readonly, nonatomic) NSDictionary *featureCounts;
@property (readonly, nonatomic) NSArray *outputNames;
@property (readonly, nonatomic) NSDictionary *classCounts;

- (void)dealloc;
- (void).cxx_destruct;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 error:(id *)a3;
- (id)initWithModelName:(id)a0;
- (BOOL)_recursivelyPredictProbabilitiesForDrawing:(id)a0 features:(void *)a1 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 modelInputName:(id)a3 modelOutputNames:(id)a4 probabilities:(void *)a5 probabilityPredictionBlock:(id /* block */)a6 error:(id *)a7 cancellationBlock:(id /* block */)a8;

@end
