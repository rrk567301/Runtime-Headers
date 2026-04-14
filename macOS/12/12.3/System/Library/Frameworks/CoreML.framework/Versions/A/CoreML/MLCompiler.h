@interface MLCompiler : NSObject

+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)compileSpecificationAtURL:(id)a0 toURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)_compileSpecificationAtURL:(id)a0 toURL:(id)a1 compiledModelName:(id)a2 options:(id)a3 error:(id *)a4;
+ (BOOL)fingerprintSpecificationAtURL:(id)a0 toArchive:(void *)a1 error:(id *)a2;
+ (BOOL)encryptCompiledModelAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)contentsOfDirectoryAtURL:(id)a0 error:(id *)a1;
+ (BOOL)encryptFileAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)storeEncryptionInfoInCompiledArchive:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)addMLProgramToCompiledModelAtURL:(id)a0 withCompilationMode:(int)a1 dryRun:(BOOL)a2 oarchiveForModelCompilation:(void *)a3 error:(id *)a4;
+ (BOOL)canAddMLProgramToCompiledModelAtURL:(id)a0;
+ (id)compiledVersionForSpecificationAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)versionInfo;
+ (id)compileModelAtURL:(id)a0 toURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)addMLProgramToCompiledModelAtURL:(id)a0 error:(id *)a1;
+ (id)compiledVersionForModelAtURL:(id)a0 options:(id)a1 error:(id *)a2;

@end
