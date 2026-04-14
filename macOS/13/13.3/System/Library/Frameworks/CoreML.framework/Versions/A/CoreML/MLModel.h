@class MLPredictionEvent, MLModelConfiguration, MLModelDescription, MLFairPlayDecryptSession, MLModelMetadata;
@protocol MLProgram;

@interface MLModel : NSObject <MLModeling> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _emittedDetailsToInstruments;
}

@property (nonatomic) unsigned long long signpostID;
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) MLModelConfiguration *configuration;
@property (retain, nonatomic) MLFairPlayDecryptSession *decryptSession;
@property (readonly) id<MLProgram> program;
@property (readonly) MLModelMetadata *metadata;

+ (id)_compileModelAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)compileModelAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)compileModelAtURL:(id)a0 error:(id *)a1;
+ (id)compileModelWithoutAutoreleaseAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (unsigned long long)generateSignpostId;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadModelAsset:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)modelWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)modelWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)predictionsFromLoopingOverBatch:(id)a0 model:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)predictionsFromSubbatchingBatch:(id)a0 maxSubbatchLength:(long long)a1 predictionBlock:(id /* block */)a2 options:(id)a3 error:(id *)a4;
+ (BOOL)serializeInterfaceAndMetadata:(void *)a0 toArchive:(void *)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)debugQuickLookObject;
- (void)enableInstrumentsTracing;
- (void)enableInstrumentsTracingIfNeeded;
- (id)executionSchedule;
- (id)initDescriptionOnlyWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (id)initInterfaceAndMetadataWithCompiledArchive:(void *)a0 error:(id *)a1;
- (id)initWithDescription:(id)a0;
- (id)initWithDescription:(id)a0 configuration:(id)a1;
- (id)initWithName:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4 configuration:(id)a5;
- (id)modelPath;
- (id)objectBoundingBoxOutputDescription;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)pipelineOfPostVisionFeaturePrintModelsFromPipeline:(id)a0;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)setModelPath:(id)a0 modelName:(id)a1;
- (id)vectorizeInput:(id)a0 error:(id *)a1;
- (id)visionFeaturePrintInfo;

@end
