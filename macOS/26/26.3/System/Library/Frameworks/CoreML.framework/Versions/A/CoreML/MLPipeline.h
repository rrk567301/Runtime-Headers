@class NSArray, NSString;

@interface MLPipeline : MLModelEngine <MLPipeline>

@property (retain) NSArray *models;
@property (retain) NSArray *modelNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classLabelsForPipelineFromSubModelDescriptionArray:(id)a0 predictedFeatureName:(id)a1;
+ (id)extractSubModelNamesFromArchive:(void *)a0 numModels:(unsigned long long)a1;
+ (id)classLabelsForPipelineFromSubModelArray:(id)a0 predictedFeatureName:(id)a1;
+ (BOOL)parseModelArchive:(void *)a0 subModelNames:(id *)a1 subModelArchiveNames:(id *)a2 error:(id *)a3;
+ (id)loadModelAssetDescriptionFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (unsigned long long)predictionTypeForKTrace;
- (void)updateParameterDescriptionsByKeyBasedOnSubModel;
- (id)executionSchedule;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_submitPredictionRequestToSubmodel:(unsigned long long)a0 input:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)supportsConcurrentSubmissions;
- (id)initWithModels:(id)a0 modelNames:(id)a1 description:(id)a2 configuration:(id)a3;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initModelFromMetadataAndArchive:(void *)a0 versionInfo:(id)a1 description:(id)a2 configuration:(id)a3 error:(id *)a4;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)replaceModelAtIndex:(unsigned long long)a0 with:(id)a1;

@end
