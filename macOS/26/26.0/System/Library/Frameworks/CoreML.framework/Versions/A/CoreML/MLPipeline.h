@class NSArray, NSString;

@interface MLPipeline : MLModelEngine <MLPipeline>

@property (retain) NSArray *models;
@property (retain) NSArray *modelNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extractSubModelNamesFromArchive:(void *)a0 numModels:(unsigned long long)a1;
+ (BOOL)parseModelArchive:(void *)a0 subModelNames:(id *)a1 subModelArchiveNames:(id *)a2 error:(id *)a3;
+ (id)classLabelsForPipelineFromSubModelArray:(id)a0 predictedFeatureName:(id)a1;
+ (id)classLabelsForPipelineFromSubModelDescriptionArray:(id)a0 predictedFeatureName:(id)a1;
+ (id)loadModelAssetDescriptionFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (id)executionSchedule;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (BOOL)supportsConcurrentSubmissions;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initModelFromMetadataAndArchive:(void *)a0 versionInfo:(id)a1 description:(id)a2 configuration:(id)a3 error:(id *)a4;
- (unsigned long long)predictionTypeForKTrace;
- (id)initWithModels:(id)a0 modelNames:(id)a1 description:(id)a2 configuration:(id)a3;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)replaceModelAtIndex:(unsigned long long)a0 with:(id)a1;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_submitPredictionRequestToSubmodel:(unsigned long long)a0 input:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateParameterDescriptionsByKeyBasedOnSubModel;
- (void).cxx_destruct;

@end
