@class NSArray;

@interface MLPipeline : MLModel <MLSpecificationCompiler>

@property (retain) NSArray *models;
@property (retain) NSArray *modelNames;

+ (void)archiveCustomModelNames:(const void *)a0 to:(void *)a1;
+ (BOOL)archivePipelineModelDetailsFrom:(const void *)a0 toArchive:(void *)a1 error:(id *)a2;
+ (void)archivePipelineUpdateParameterForModels:(const void *)a0 to:(void *)a1 updatable:(BOOL)a2;
+ (id)classLabelsForPipelineFromSubModelArray:(id)a0 predictedFeatureName:(id)a1;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)compileWithModelsInPipeline:(const void *)a0 toArchive:(void *)a1 options:(id)a2 updatable:(BOOL)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)executionSchedule;
- (id)extractModelNamesFromArchive:(void *)a0 numModels:(unsigned long long)a1;
- (id)initModelFromMetadataAndArchive:(void *)a0 versionInfo:(id)a1 description:(id)a2 configuration:(id)a3 error:(id *)a4;
- (id)initWithModels:(id)a0 modelNames:(id)a1 description:(id)a2 configuration:(id)a3;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)replaceModelAtIndex:(unsigned long long)a0 with:(id)a1;
- (void)updateParameterDescriptionsByKeyBasedOnSubModel;

@end
