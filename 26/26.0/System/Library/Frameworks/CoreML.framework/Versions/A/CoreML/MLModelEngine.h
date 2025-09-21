@class NSString, MLModelConfiguration, MLModelMetadata, MLModelDescription;

@interface MLModelEngine : NSObject <MLModeling> {
    unsigned long long _signpostID;
    MLModelDescription *_modelDescription;
    MLModelConfiguration *_configuration;
}

@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) BOOL supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) BOOL recordsPredictionEvent;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executionSchedule;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)enableInstrumentsTracing;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)modelPath;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 configuration:(id)a1;
- (id)initWithName:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4 configuration:(id)a5;
- (id)newRequestForModel:(id)a0 inputFeatures:(id)a1 options:(id)a2 error:(id *)a3;
- (void)setModelPath:(id)a0 modelName:(id)a1;
- (id)vectorizeInput:(id)a0 error:(id *)a1;

@end
