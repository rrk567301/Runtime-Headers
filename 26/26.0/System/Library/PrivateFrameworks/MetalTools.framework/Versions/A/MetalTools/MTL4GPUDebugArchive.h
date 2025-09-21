@interface MTL4GPUDebugArchive : MTL4ToolsArchive

- (id)newRenderPipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithName:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newBinaryFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newComputePipelineStateWithName:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithName:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithName:(id)a0 error:(id *)a1;

@end
