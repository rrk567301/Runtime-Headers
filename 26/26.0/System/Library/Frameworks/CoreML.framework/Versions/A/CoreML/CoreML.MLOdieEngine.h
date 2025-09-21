@class NSError;
@protocol MLFeatureProvider, MLPredictionRequest;

@interface CoreML.MLOdieEngine : MLModelSwiftEngine <MLStatefulModelEngine> {
    void /* unknown type, empty encoding */ mlirBytecodeURL;
    void /* unknown type, empty encoding */ precompiledLibrary;
    void /* unknown type, empty encoding */ functionName;
    void /* unknown type, empty encoding */ functionPool;
}

@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;

+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)submitPredictionRequest:(id<MLPredictionRequest>)a0 completionHandler:(void (^)(id<MLFeatureProvider>, NSError *))a1;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 configuration:(id)a1;
- (id)newRequestForModel:(id)a0 inputFeatures:(id)a1 usingState:(id)a2 options:(id)a3 error:(id *)a4;
- (id)newStateWithClientBuffers:(id)a0;
- (id)predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 error:(id *)a3;

@end
