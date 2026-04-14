@interface _MLTModelLoader : NSObject

+ (int)compileModelAtPath:(id)a0 compiledPath:(id)a1 encryptCompiledModel:(BOOL)a2 sinfURL:(id)a3 addMLProgram:(BOOL)a4 error:(id *)a5;
+ (id)compilerOptionsWithEncryptModel:(BOOL)a0 sinfURL:(id)a1 error:(id *)a2;
+ (id)createInMemoryModel:(id)a0 withModelConfiguration:(id)a1 error:(id *)a2;
+ (int)encryptCompiledModelAtPath:(id)a0 sinfURL:(id)a1 error:(id *)a2;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(BOOL)a2 addMLProgram:(BOOL)a3 assertModelIsMLProgram:(BOOL)a4 inMemoryModel:(BOOL)a5 error:(id *)a6;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(BOOL)a2 addMLProgram:(BOOL)a3 assertModelIsMLProgram:(BOOL)a4 inMemoryModel:(BOOL)a5 experimentalMLE5EngineUsage:(long long)a6 error:(id *)a7;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 computeDevice:(id)a2 useLowPrecisionAccumulationOnGPU:(BOOL)a3 allowFallback:(BOOL)a4 enableProfiling:(BOOL)a5 encryptCompiledModel:(BOOL)a6 sinfURL:(id)a7 useAsyncLoad:(BOOL)a8 usePreloadedKey:(BOOL)a9 addMLProgram:(BOOL)a10 assertModelIsMLProgram:(BOOL)a11 inMemoryModel:(BOOL)a12 experimentalMLE5EngineUsage:(long long)a13 error:(id *)a14;
+ (BOOL)modelIsMILAndNNv1FallbackDetected:(id)a0 modelURL:(id)a1;
+ (unsigned long long)modelSizeAtPath:(id)a0;
+ (BOOL)removeTemporaryModelForModelAtPath:(id)a0 error:(id *)a1;
+ (id)temporaryCompiledURLForModelPath:(id)a0;
+ (id)temporaryCompiledURLForModelURL:(id)a0;
+ (id)updateableModelAtPath:(id)a0 computeUnit:(long long)a1 error:(id *)a2;
+ (id)urlForModelAtPath:(id)a0 encryptCompiledModel:(BOOL)a1 sinfURL:(id)a2 addMLProgram:(BOOL)a3 error:(id *)a4;

@end
