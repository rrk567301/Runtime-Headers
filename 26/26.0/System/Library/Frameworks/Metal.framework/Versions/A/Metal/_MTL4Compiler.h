@class NSString, NSObject;
@protocol MTL4PipelineDataSetSerializer, MTLDevice, MTLBinaryArchive, OS_dispatch_queue;

@interface _MTL4Compiler : _MTLObjectWithLabel <MTL4CompilerGGDSPI> {
    NSObject<OS_dispatch_queue> *_mlcompiler_queue;
    NSObject<OS_dispatch_queue> *_debugQueue;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTL4PipelineDataSetSerializer> pipelineDataSetSerializer;
@property (readonly) id<MTLBinaryArchive> destinationBinaryArchive;
@property (readonly) BOOL shouldMaximizeConcurrentCompilation;
@property (readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newLibraryWithDescriptor:(id)a0 error:(id *)a1;
- (id)newDynamicLibraryWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)newDynamicLibrary:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (void)cancel;
- (id)newDynamicLibraryWithURL:(id)a0 error:(id *)a1;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)newLibraryWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 compilerTaskOptions:(id)a1 error:(id *)a2;
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
- (id)newBinaryFunctionWithDescriptor:(id)a0 functionType:(unsigned long long)a1 compilerTaskOptions:(id)a2 completionHandler:(id /* block */)a3;
- (id)newBinaryFunctionWithDescriptor:(id)a0 functionType:(unsigned long long)a1 compilerTaskOptions:(id)a2 error:(id *)a3;

@end
