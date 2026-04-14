@class NSString, NSData, NSArray;

@interface MLTreeEnsembleRegressor : MLRegressor <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler> {
    NSData *_model_data;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct { char *__cap_; } ; } _cached_model;
    unsigned long long num_dimensions;
    NSArray *output_classes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)loadModelFromSpecificationWithCompilationOptions:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (double)scalarRegress:(id)a0 error:(id *)a1;
- (void)vectorRegress:(double *)a0 dest:(double *)a1;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (const char *)modelData;
- (double)scalarRegress:(double *)a0;
- (id).cxx_construct;

@end
