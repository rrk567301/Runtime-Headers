@interface MTLLegacySVBinaryArchive : MTLToolsBinaryArchive

- (char)addComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (char)addComputePipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)addRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (char)addRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (char)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithBinaryArchive:(id)a0 device:(id)a1;

@end
