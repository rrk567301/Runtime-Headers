@class NSString;

@interface MTL4ToolsArchive : MTLToolsObject <MTL4ArchiveGGDSPI>

@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newRenderPipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithName:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)newArchiveReplyForPipelineFunctionWithDescriptor:(id)a0 functionType:(unsigned long long)a1 functionId:(struct { unsigned char x0[32]; } *)a2;
- (id)newBinaryFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newComputePipelineStateWithName:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithName:(id)a0 dynamicLinkingDescriptor:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithName:(id)a0 error:(id *)a1;

@end
