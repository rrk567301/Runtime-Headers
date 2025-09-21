@class NSString;
@protocol MTLDevice;

@interface _MTL4Archive : _MTLObjectWithLabel <MTL4ArchiveGGDSPI> {
    id<MTLDevice> _device;
    struct unique_ptr<MTL4ArchiveImpl, std::default_delete<MTL4ArchiveImpl>> { struct MTL4ArchiveImpl *__ptr_; } _archiveReader;
}

@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newRenderPipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (id)initWithDevice:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)newComputePipelineStateWithName:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newArchiveReplyForPipelineFunctionWithDescriptor:(id)a0 functionType:(unsigned long long)a1 functionId:(struct { unsigned char x0[32]; } *)a2;
- (id)newBinaryFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newComputePipelineStateWithName:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithName:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithName:(id)a0 error:(id *)a1;
- (BOOL)loadFromURL:(id)a0 error:(id *)a1;
- (id)newArchiveArrayReplyForPipelineWithName:(id)a0;
- (id)newArchiveReplyForBinaryFunctionWithDescriptor:(id)a0;

@end
