@class MLFairPlayDecryptSession, MLModelConfiguration, MLModelDescription, MLModelMetadata, MLPredictionEvent;

@interface MLModel : NSObject <MLModeling>

@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) MLModelConfiguration *configuration;
@property (retain, nonatomic) MLFairPlayDecryptSession *decryptSession;
@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;

+ (id)predictionsFromLoopingOverBatch:(id)a0 model:(id)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)serializeInterfaceAndMetadata:(void *)a0 toArchive:(void *)a1 error:(id *)a2;
+ (id)_compileModelAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)modelWithContentsOfURL:(id)a0 error:(id *)a1;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)predictionsFromSubbatchingBatch:(id)a0 maxSubbatchLength:(long long)a1 predictionBlock:(id /* block */)a2 options:(id)a3 error:(id *)a4;
+ (id)compileModelWithoutAutoreleaseAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)compileModelAtURL:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)initWithDescription:(id)a0 configuration:(id)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)executionSchedule;
- (void)setModelPath:(id)a0 modelName:(id)a1;
- (id)modelPath;
- (id)debugQuickLookObject;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)initWithDescription:(id)a0;
- (id)initDescriptionOnlyWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (id)initInterfaceAndMetadataWithCompiledArchive:(void *)a0 error:(id *)a1;
- (id)objectBoundingBoxOutputDescription;
- (id)vectorizeInput:(id)a0 error:(id *)a1;
- (id)pipelineOfPostVisionFeaturePrintModelsFromPipeline:(id)a0;
- (id)visionFeaturePrintInfo;
- (id)initWithName:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4 configuration:(id)a5;

@end
