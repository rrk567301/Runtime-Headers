@interface MLPipelineCompiler : NSObject <MLSpecificationCompilerResolvingBlobFileReferences>

+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)_compileSpecification:(void *)a0 blobMapping:(id)a1 toArchive:(void *)a2 options:(id)a3 error:(id *)a4;
+ (id)compileSpecification:(void *)a0 blobMapping:(id)a1 toArchive:(void *)a2 options:(id)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (void)_archiveCustomModelNames:(const void *)a0 to:(void *)a1;
+ (BOOL)_archivePipelineModelDetailsFrom:(const void *)a0 toArchive:(void *)a1 error:(id *)a2;
+ (void)_archivePipelineUpdateParameterForModels:(const void *)a0 to:(void *)a1 updatable:(BOOL)a2;
+ (id)_compileWithModelsInPipeline:(const void *)a0 blobMapping:(id)a1 toArchive:(void *)a2 options:(id)a3 updatable:(BOOL)a4 osSizeTracking:(id)a5 error:(id *)a6;

@end
