@interface MTL4GPUDebugCompiler : MTL4ToolsCompiler

- (id)newLibraryWithDescriptor:(id)a0 error:(id *)a1;
- (id)newDynamicLibrary:(id)a0 error:(id *)a1;
- (id)newDynamicLibraryWithURL:(id)a0 error:(id *)a1;
- (id)newLibraryWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 error:(id *)a2;
- (void)_modifyComputeDynamicLinkingDescriptor:(id)a0;
- (void)_modifyComputePipelineDescriptor:(id)a0;
- (void)_modifyComputePipelineDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1;
- (void)_modifyDynamicLinkingDescriptor:(id)a0;
- (void)_modifyRenderDynamicLinkingDescriptor:(id)a0;
- (void)_modifyRenderPipelineDescriptor:(id)a0;
- (void)_modifyRenderPipelineDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1;
- (id)newBinaryFunctionWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)newBinaryFunctionWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 error:(id *)a2;
- (id)newComputePipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)newComputePipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 error:(id *)a2;
- (id)newComputePipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 compilerTaskOptions:(id)a2 completionHandler:(id /* block */)a3;
- (id)newComputePipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 compilerTaskOptions:(id)a2 error:(id *)a3;
- (id)newDynamicLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (id)newDynamicLibraryWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)newRenderPipelineStateBySpecializationWithDescriptor:(id)a0 pipeline:(id)a1 completionHandler:(id /* block */)a2;
- (id)newRenderPipelineStateBySpecializationWithDescriptor:(id)a0 pipeline:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 compilerTaskOptions:(id)a2 completionHandler:(id /* block */)a3;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 compilerTaskOptions:(id)a2 error:(id *)a3;
- (id)newUnwrappedMTL4BinaryFunctionDescriptor:(id *)a0;
- (id)newUnwrappedMTL4ComputeDynamicLinkingDescriptor:(id *)a0;
- (id)newUnwrappedMTL4ComputePipelineDescriptor:(id *)a0;
- (id)newUnwrappedMTL4ComputePipelineDescriptor:(id *)a0 dynamicLinkingDescriptor:(id *)a1;
- (id)newUnwrappedMTL4RenderDynamicLinkingDescriptor:(id *)a0;
- (id)newUnwrappedMTL4RenderPipelineDescriptor:(id *)a0;
- (id)newUnwrappedMTL4RenderPipelineDescriptor:(id *)a0 dynamicLinkingDescriptor:(id *)a1;
- (id)wrapDynamicLibraries:(id)a0;

@end
