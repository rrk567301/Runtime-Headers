@interface _MLTModelLoader : NSObject

+ (int)compileModelAtPath:(id)a0 compiledPath:(id)a1 encryptCompiledModel:(char)a2 sinfURL:(id)a3 addMLProgram:(char)a4 error:(id *)a5;
+ (id)compiledModelURLForModelPath:(id)a0 encryptCompiledModel:(char)a1 sinfURL:(id)a2 addMLProgram:(char)a3 error:(id *)a4;
+ (id)compilerOptionsWithEncryptModel:(char)a0 sinfURL:(id)a1 error:(id *)a2;
+ (id)createInMemoryModel:(id)a0 blobFileResolutionOption:(long long)a1 withModelConfiguration:(id)a2 error:(id *)a3;
+ (int)encryptCompiledModelAtPath:(id)a0 sinfURL:(id)a1 error:(id *)a2;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(char)a2 addMLProgram:(char)a3 assertModelIsMLProgram:(char)a4 inMemoryModel:(char)a5 inMemoryModelBlobFileResolutionOption:(long long)a6 error:(id *)a7;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(char)a2 addMLProgram:(char)a3 assertModelIsMLProgram:(char)a4 inMemoryModel:(char)a5 inMemoryModelBlobFileResolutionOption:(long long)a6 experimentalMLE5EngineUsage:(long long)a7 error:(id *)a8;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(char)a2 addMLProgram:(char)a3 assertModelIsMLProgram:(char)a4 inMemoryModel:(char)a5 inMemoryModelBlobFileResolutionOption:(long long)a6 experimentalMLE5EngineUsage:(long long)a7 experimentalMLE5BNNSGraphBackendUsage:(long long)a8 experimentalMLE5BNNSGraphBackendUsageMultiSegment:(long long)a9 error:(id *)a10;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 computeDevice:(id)a2 functionName:(id)a3 useLowPrecisionAccumulationOnGPU:(char)a4 allowFallback:(char)a5 enableProfiling:(char)a6 encryptCompiledModel:(char)a7 sinfURL:(id)a8 useAsyncLoad:(char)a9 usePreloadedKey:(char)a10 addMLProgram:(char)a11 assertModelIsMLProgram:(char)a12 inMemoryModel:(char)a13 inMemoryModelBlobFileResolutionOption:(long long)a14 experimentalMLE5EngineUsage:(long long)a15 experimentalMLE5BNNSGraphBackendUsage:(long long)a16 experimentalMLE5BNNSGraphBackendUsageMultiSegment:(long long)a17 e5rtMutableMILWeightURLs:(id)a18 e5rtDynamicCallableFunctions:(id)a19 serializesMILTextForDebugging:(char)a20 specializationStrategy:(long long)a21 specializationUsesMPSGraphExecutable:(char)a22 e5rtCustomANECompilerOptions:(id)a23 error:(id *)a24;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 computeDevice:(id)a2 functionName:(id)a3 useLowPrecisionAccumulationOnGPU:(char)a4 allowFallback:(char)a5 enableProfiling:(char)a6 encryptCompiledModel:(char)a7 sinfURL:(id)a8 useAsyncLoad:(char)a9 usePreloadedKey:(char)a10 addMLProgram:(char)a11 assertModelIsMLProgram:(char)a12 inMemoryModel:(char)a13 inMemoryModelBlobFileResolutionOption:(long long)a14 experimentalMLE5EngineUsage:(long long)a15 experimentalMLE5BNNSGraphBackendUsage:(long long)a16 experimentalMLE5BNNSGraphBackendUsageMultiSegment:(long long)a17 e5rtMutableMILWeightURLs:(id)a18 e5rtDynamicCallableFunctions:(id)a19 serializesMILTextForDebugging:(char)a20 specializationStrategy:(long long)a21 specializationUsesMPSGraphExecutable:(char)a22 e5rtCustomANECompilerOptions:(id)a23 experimentalMLProgramEncryptedCacheUsage:(long long)a24 error:(id *)a25;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 computeDevice:(id)a2 useLowPrecisionAccumulationOnGPU:(char)a3 allowFallback:(char)a4 enableProfiling:(char)a5 encryptCompiledModel:(char)a6 sinfURL:(id)a7 useAsyncLoad:(char)a8 usePreloadedKey:(char)a9 addMLProgram:(char)a10 assertModelIsMLProgram:(char)a11 inMemoryModel:(char)a12 inMemoryModelBlobFileResolutionOption:(long long)a13 experimentalMLE5EngineUsage:(long long)a14 error:(id *)a15;
+ (BOOL)modelIsMILAndNNv1FallbackDetected:(id)a0 modelURL:(id)a1;
+ (unsigned long long)modelSizeAtPath:(id)a0;
+ (char)removeTemporaryModelForModelAtPath:(id)a0 error:(id *)a1;
+ (id)temporaryCompiledURLForModelPath:(id)a0;
+ (id)temporaryCompiledURLForModelURL:(id)a0;
+ (id)updateableModelAtPath:(id)a0 computeUnit:(long long)a1 error:(id *)a2;
+ (void)validateComputeUnitSelectionForCompiledModel:(id)a0 withModelConfiguration:(id)a1 withComputeUnit:(long long)a2;

@end
