@class MLModel, NSString, NSArray;

@interface ATXMLInferenceRunner : NSObject

@property (retain, nonatomic) MLModel *mlModel;
@property (retain, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSArray *featuresToConcatenate;
@property (copy, nonatomic) NSArray *intermediateValuesForInspection;

- (void).cxx_destruct;
- (id)_inferenceResultWithOutputFeatureProvider:(id)a0 inputFeatureProvider:(id)a1;
- (double)_getScoreFromInferenceResult:(id)a0;
- (id)initModelWithName:(id)a0 error:(id *)a1;
- (BOOL)runInferenceOnItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[828]; float x3; BOOL x4; BOOL x5; } *)a0 resultBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)runInferenceOnItems:(void *)a0 resultBlock:(id /* block */)a1 error:(id *)a2;

@end
