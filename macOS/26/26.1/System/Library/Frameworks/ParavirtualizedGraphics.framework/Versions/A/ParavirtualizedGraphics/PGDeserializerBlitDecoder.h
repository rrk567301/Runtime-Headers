@class NSString, _PGDeserializer;
@protocol MTLBlitCommandEncoderSPI;

@interface PGDeserializerBlitDecoder : NSObject <PGDeserializerDecoder> {
    _PGDeserializer *_deserializer;
    id<MTLBlitCommandEncoderSPI> _blitEncoder;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fault;
- (void)decodeBlitUpdateFenceWithCursor:(void *)a0;
- (void)decodeBlitWaitForFenceWithCursor:(void *)a0;
- (void)decodeCopyFromBufferToBufferWithCursor:(void *)a0;
- (void)decodeCopyFromBufferToTextureWithCursor:(void *)a0;
- (void)decodeCopyFromTextureToBufferWithCursor:(void *)a0;
- (void)decodeCopyFromTextureToTextureWithCursor:(void *)a0;
- (void)decodeCopyFromTextureToTextureWithNumSliceLevelWithCursor:(void *)a0;
- (void)decodeCopyFromTextureToTextureWithOptionsWithCursor:(void *)a0;
- (void)decodeCopyIndirectCommandBufferWithCursor:(void *)a0;
- (void)decodeFillBufferWithCursor:(void *)a0;
- (void)decodeFillBufferWithPatternWithCursor:(void *)a0;
- (void)decodeFillTextureWithBytesWithCursor:(void *)a0;
- (void)decodeFillTextureWithColorWithCursor:(void *)a0;
- (void)decodeGenerateMipmapsWithCursor:(void *)a0;
- (void)decodeInvalidateCompressedTextureImageWithCursor:(void *)a0;
- (void)decodeInvalidateCompressedTextureWithCursor:(void *)a0;
- (void)decodeOptimizeForCPUAccessWithCursor:(void *)a0;
- (void)decodeOptimizeForGPUAccessWithCursor:(void *)a0;
- (void)decodeOptimizeImageForCPUAccessWithCursor:(void *)a0;
- (void)decodeOptimizeImageForGPUAccessWithCursor:(void *)a0;
- (void)decodeOptimizeIndirectCommandBufferWithCursor:(void *)a0;
- (void)decodeResetCommandsInCommandBufferWithCursor:(void *)a0;
- (void)decodeSynchronizeResourceWithCursor:(void *)a0;
- (void)decodeSynchronizeTextureImageWithCursor:(void *)a0;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(struct shared_ptr<PGVirtualMemoryCursor> { struct PGVirtualMemoryCursor *x0; struct __shared_weak_count *x1; })a1;
- (id)getBufferForReferenceNonNull:(unsigned int)a0;
- (id)getIndirectCommandBufferForReferenceNonNull:(unsigned int)a0;
- (id)getTextureForReferenceNonNull:(unsigned int)a0;
- (id)initWithDeserializer:(id)a0 commandBuffer:(id)a1;

@end
