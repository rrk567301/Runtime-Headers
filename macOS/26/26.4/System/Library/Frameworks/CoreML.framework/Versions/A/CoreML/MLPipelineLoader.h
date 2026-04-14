@class NSString;

@interface MLPipelineLoader : NSObject <MLModelAssetDescriptionLoader, MLCompiledModelLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)loadModelAssetDescriptionFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (BOOL)ensureFrameworkSupportsCompilerVersion:(id)a0 error:(id *)a1;


@end
