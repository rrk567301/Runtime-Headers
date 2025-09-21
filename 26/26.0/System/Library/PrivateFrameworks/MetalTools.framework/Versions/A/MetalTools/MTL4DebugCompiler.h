@interface MTL4DebugCompiler : MTL4ToolsCompiler

- (id)newLibraryWithDescriptor:(id)a0 error:(id *)a1;
- (id)newDynamicLibraryWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)newDynamicLibrary:(id)a0 error:(id *)a1;
- (id)newDynamicLibraryWithURL:(id)a0 error:(id *)a1;
- (id)newLibraryWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 error:(id *)a2;
- (void)validateDynamicLibrary:(id)a0 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a1;
- (BOOL)hasUnspecializedProperties:(id)a0;
- (id)initWithCompiler:(id)a0 device:(id)a1;
- (id)newBinaryFunctionWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)newBinaryFunctionWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 error:(id *)a2;
- (id)newComputePipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)newComputePipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 error:(id *)a2;
- (id)newComputePipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 compilerTaskOptions:(id)a2 completionHandler:(id /* block */)a3;
- (id)newComputePipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 compilerTaskOptions:(id)a2 error:(id *)a3;
- (id)newDynamicLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (id)newDynamicLibraryWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)newDynamicLibraryWithURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)newMachineLearningPipelineStateWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newMachineLearningPipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateBySpecializationWithDescriptor:(id)a0 pipeline:(id)a1 completionHandler:(id /* block */)a2;
- (id)newRenderPipelineStateBySpecializationWithDescriptor:(id)a0 pipeline:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 compilerTaskOptions:(id)a2 completionHandler:(id /* block */)a3;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 compilerTaskOptions:(id)a2 error:(id *)a3;
- (id)newSpecializedMTL4PipelineDescriptor:(id)a0 descriptor:(id)a1;

@end
