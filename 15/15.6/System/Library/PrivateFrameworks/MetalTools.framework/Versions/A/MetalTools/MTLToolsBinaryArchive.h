@class NSArray, NSString;
@protocol MTLDevice;

@interface MTLToolsBinaryArchive : MTLToolsObject <MTLBinaryArchiveSPI>

@property (readonly) unsigned long long options;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)storeComputePipelineDescriptor:(id)a0;
- (char)addLibraryWithDescriptor:(id)a0 error:(id *)a1;
- (char)addComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (char)addComputePipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)addFunctionWithDescriptor:(id)a0 library:(id)a1 error:(id *)a2;
- (char)addMeshRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (char)addMeshRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)addRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (char)addRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (char)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)archiveFunctionIds;
- (char)enumerateArchivesFromBackingFile:(id /* block */)a0;
- (char)enumerateArchivesFromPipelineCollection:(id /* block */)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (struct MTLPipelineCollection { } *)pipelineCollection;
- (char)recompileToArchiveWithURL:(id)a0 error:(id *)a1;
- (char)serializeToURL:(id)a0 error:(id *)a1;
- (char)serializeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)storeMeshRenderPipelineDescriptor:(id)a0;
- (char)storeRenderPipelineDescriptor:(id)a0;
- (char)storeTileRenderPipelineDescriptor:(id)a0;

@end
