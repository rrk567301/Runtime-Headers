@class NSString;
@protocol MTLBinaryArchive, MTLDevice, MTL4PipelineDataSetSerializer;

@interface MTL4ToolsCompiler : MTLToolsObject <MTL4CompilerGGDSPI>

@property (readonly) id<MTLBinaryArchive> destinationBinaryArchive;
@property (readonly) BOOL shouldMaximizeConcurrentCompilation;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) id<MTL4PipelineDataSetSerializer> pipelineDataSetSerializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newLibraryWithDescriptor:(id)a0 error:(id *)a1;
- (id)newDynamicLibraryWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)newDynamicLibrary:(id)a0 error:(id *)a1;
- (void)cancel;
- (id)newDynamicLibraryWithURL:(id)a0 error:(id *)a1;
- (void)setLabel:(id)a0;
- (id)newLibraryWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 error:(id *)a2;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
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
- (void)setPipelineDataSetSerializer:(id)a0;

@end
