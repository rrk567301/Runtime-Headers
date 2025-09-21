@interface MLNeuralNetworkCompiler : MLModel <MLSpecificationCompilerResolvingBlobFileReferences, MLSpecificationCompiler>

+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)_compileSpecification:(void *)a0 blobMapping:(id)a1 toArchive:(void *)a2 options:(id)a3 error:(id *)a4;
+ (id)compileSpecification:(void *)a0 blobMapping:(id)a1 toArchive:(void *)a2 options:(id)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (void)collectEspressoModelDetails:(void *)a0 modelPath:(const void *)a1;
+ (BOOL)collectNNModelDetailsFromArchive:(void *)a0 spec:(void *)a1 error:(id *)a2;
+ (id)iOS17CompilerVersionInfo;
+ (id)iOS18CompilerVersionInfo;

@end
