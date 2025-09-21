@class NSString, _PGDeserializer;
@protocol MTLComputePipelineState, MTLCommandBuffer, MTLComputeCommandEncoderSPI;

@interface PGDeserializerComputeDecoder : NSObject <PGDeserializerDecoder> {
    _PGDeserializer *_deserializer;
    id<MTLComputeCommandEncoderSPI> _computeEncoder;
    id<MTLCommandBuffer> _commandBuffer;
    id<MTLComputePipelineState> _computePipeline;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fault;
- (void)decodeEncodeEndWhileWithCursor:(void *)a0;
- (void)decodeBarrierResourcesWithCursor:(void *)a0;
- (void)decodeBarrierScopeWithCursor:(void *)a0;
- (id)decodeComputePassDescriptor:(struct shared_ptr<PGVirtualMemoryCursor> { struct PGVirtualMemoryCursor *x0; struct __shared_weak_count *x1; })a0;
- (void)decodeDispatchThreadgroupsIndirectWithCursor:(void *)a0;
- (void)decodeDispatchThreadgroupsWithCursor:(void *)a0;
- (void)decodeDispatchThreadsIndirectWithCursor:(void *)a0;
- (void)decodeDispatchThreadsWithCursor:(void *)a0;
- (void)decodeEncodeEndDoWhileWithCursor:(void *)a0;
- (void)decodeEncodeEndIfWithCursor:(void *)a0;
- (void)decodeEncodeStartDoWhileWithCursor:(void *)a0;
- (void)decodeEncodeStartElseWithCursor:(void *)a0;
- (void)decodeEncodeStartIfWithCursor:(void *)a0;
- (void)decodeEncodeStartWhileWithCursor:(void *)a0;
- (void)decodeExecuteCommandInBufferRangedWithCursor:(void *)a0;
- (void)decodeExecuteCommandInBufferWithCursor:(void *)a0;
- (void)decodeInsertCompressedTextureReinterpretationFlushWithCursor:(void *)a0;
- (void)decodeSetBufferOffsetWithCursor:(void *)a0;
- (void)decodeSetBufferOffsetWithStrideWithCursor:(void *)a0;
- (void)decodeSetBuffersWithCursor:(void *)a0;
- (void)decodeSetBuffersWithStrideWithCursor:(void *)a0;
- (void)decodeSetComputePassDispatchTypeWithCursor:(void *)a0 descriptor:(id)a1;
- (void)decodeSetImageblockWidthWithCursor:(void *)a0;
- (void)decodeSetPipelineStateWithCursor:(void *)a0;
- (void)decodeSetSamplersLODClampWithCursor:(void *)a0;
- (void)decodeSetSamplersWithCursor:(void *)a0;
- (void)decodeSetStageInRegionIndirectWithCursor:(void *)a0;
- (void)decodeSetStageInRegionWithCursor:(void *)a0;
- (void)decodeSetTexturesWithCursor:(void *)a0;
- (void)decodeSetThreadgroupMemoryLengthWithCursor:(void *)a0;
- (void)decodeUpdateFenceWithCursor:(void *)a0;
- (void)decodeUseHeapsWithCursor:(void *)a0;
- (void)decodeUseResourcesWithCursor:(void *)a0;
- (void)decodeWaitForFenceWithCursor:(void *)a0;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(struct shared_ptr<PGVirtualMemoryCursor> { struct PGVirtualMemoryCursor *x0; struct __shared_weak_count *x1; })a1;
- (id)initWithDeserializer:(id)a0 commandBuffer:(id)a1;

@end
