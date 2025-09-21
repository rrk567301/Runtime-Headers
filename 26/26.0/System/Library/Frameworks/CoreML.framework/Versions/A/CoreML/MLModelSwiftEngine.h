@interface MLModelSwiftEngine : MLModelEngine <MLCompiledModelLoader>

+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithDescription:(id)a0 configuration:(id)a1;

@end
