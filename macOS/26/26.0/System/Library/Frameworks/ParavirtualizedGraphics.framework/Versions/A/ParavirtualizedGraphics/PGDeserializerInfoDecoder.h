@class NSString, _PGDeserializer;

@interface PGDeserializerInfoDecoder : NSObject <PGDeserializerDecoder> {
    _PGDeserializer *_deserializer;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fault;
- (void)checkBuffer:(id)a0 bufferOffset:(unsigned long long)a1 forSize:(unsigned long long)a2;
- (void)decodeBufferHostResourceInfoWithCursor:(void *)a0;
- (void)decodeComputePipelineHostResourceInfoWithCursor:(void *)a0;
- (void)decodeComputePipelineImageBlockMemoryLengthWithCursor:(void *)a0;
- (void)decodeComputePipelineStateInfoWithCursor:(void *)a0;
- (void)decodeCopyRasterizationRateParameterBufferWithCursor:(void *)a0;
- (void)decodeDepthStencilHostResourceInfoWithCursor:(void *)a0;
- (void)decodeGetRasterizationRateMapInfoWithCursor:(void *)a0;
- (void)decodeHeapHostResourceInfoWithCursor:(void *)a0;
- (void)decodeHeapTextureDescriptorSizeAndAlignWithCursor:(void *)a0;
- (void)decodeICBHostResourceInfoWithCursor:(void *)a0;
- (void)decodeMapPhysicalToScreenCoordinatesMultipleWithCursor:(void *)a0;
- (void)decodeMapPhysicalToScreenCoordinatesWithCursor:(void *)a0;
- (void)decodeMapScreenToPhysicalCoordinatesWithCursor:(void *)a0;
- (void)decodeObjectUniqueIdentifierWithCursor:(void *)a0;
- (void)decodeRenderPipelineHostResourceInfoWithCursor:(void *)a0;
- (void)decodeRenderPipelineImageBlockMemoryLengthWithCursor:(void *)a0;
- (void)decodeRenderPipelineStateInfoWithCursor:(void *)a0;
- (void)decodeSamplerStateHostResourceInfoWithCursor:(void *)a0;
- (void)decodeTextureHostResourceInfoWithCursor:(void *)a0;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(struct shared_ptr<PGVirtualMemoryCursor> { struct PGVirtualMemoryCursor *x0; struct __shared_weak_count *x1; })a1;
- (id)getIndirectCommandBufferForReferenceNonNull:(unsigned int)a0;
- (id)initWithDeserializer:(id)a0;

@end
