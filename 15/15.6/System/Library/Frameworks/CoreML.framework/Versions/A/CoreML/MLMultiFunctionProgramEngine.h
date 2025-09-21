@class NSString, NSMutableDictionary, MLModelDescription, MLMultiFunctionProgramContainer, MLModelConfiguration, MLModelMetadata;

@interface MLMultiFunctionProgramEngine : MLModelEngine <MLProgramInternal, MLNeuralNetwork, MLClassifier, MLRegressor, MLCompiledModelLoader, MLProgram> {
    NSMutableDictionary *_functionNameToEngineMap;
}

@property (readonly, nonatomic) MLMultiFunctionProgramContainer *container;
@property (readonly, nonatomic) NSString *modelFileBasePath;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) char supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) char recordsPredictionEvent;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *serializedMILText;

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)evaluate:(id)a0 error:(id *)a1;
- (id)programEngineForFunction:(id)a0 error:(id *)a1;
- (id)program;
- (id)classLabels;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (void)enableInstrumentsTracing;
- (id)evaluateFunction:(id)a0 arguments:(id)a1 error:(id *)a2;
- (id)executionSchedule;
- (id)initWithProgramContainer:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)modelPath;
- (id)newContextAndReturnError:(id *)a0;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (void)removeEngineForFunctionName:(id)a0;
- (void)setModelPath:(id)a0 modelName:(id)a1;
- (void)updateModelFilePath:(id)a0;
- (char)verifyArgumentNames:(id)a0 functionName:(id)a1 error:(id *)a2;

@end
