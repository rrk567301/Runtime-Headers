@interface _MLTModelLoader : NSObject

+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(BOOL)a2 addMLProgram:(BOOL)a3 assertModelIsMLProgram:(BOOL)a4 error:(id *)a5;
+ (BOOL)removeTemporaryModelForModelAtPath:(id)a0 error:(id *)a1;
+ (id)updateableModelAtPath:(id)a0 computeUnit:(long long)a1 error:(id *)a2;
+ (id)temporaryCompiledURLForModelPath:(id)a0;
+ (unsigned long long)modelSizeAtPath:(id)a0;
+ (id)temporaryCompiledURLForModelURL:(id)a0;
+ (id)compilerOptionsWithEncryptModel:(BOOL)a0 sinfURL:(id)a1 error:(id *)a2;
+ (id)urlForModelAtPath:(id)a0 encryptCompiledModel:(BOOL)a1 sinfURL:(id)a2 addMLProgram:(BOOL)a3 error:(id *)a4;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 computeDevice:(id)a2 allowFallback:(BOOL)a3 enableProfiling:(BOOL)a4 encryptCompiledModel:(BOOL)a5 sinfURL:(id)a6 usePreloadedKey:(BOOL)a7 addMLProgram:(BOOL)a8 assertModelIsMLProgram:(BOOL)a9 error:(id *)a10;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(BOOL)a2 enableProfiling:(BOOL)a3 encryptCompiledModel:(BOOL)a4 sinfURL:(id)a5 usePreloadedKey:(BOOL)a6 addMLProgram:(BOOL)a7 assertModelIsMLProgram:(BOOL)a8 error:(id *)a9;
+ (int)compileModelAtPath:(id)a0 compiledPath:(id)a1 encryptCompiledModel:(BOOL)a2 sinfURL:(id)a3 addMLProgram:(BOOL)a4 error:(id *)a5;
+ (int)encryptCompiledModelAtPath:(id)a0 sinfURL:(id)a1 error:(id *)a2;

@end
