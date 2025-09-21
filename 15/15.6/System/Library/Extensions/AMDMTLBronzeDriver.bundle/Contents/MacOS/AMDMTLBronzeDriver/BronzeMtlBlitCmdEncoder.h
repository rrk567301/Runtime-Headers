@class NSString, BronzeMtlCmdBuffer, MTLIOAccelResource;
@protocol MTLDevice;

@interface BronzeMtlBlitCmdEncoder : MTLIOAccelBlitCommandEncoder <MTLBlitCommandEncoder, MTLCommandEncoderSPI, AmdPrivateCommandEncoder> {
    struct BronzeBlitCmdEncoderMembersRec { BronzeMtlCmdBuffer *cmdBuffer; struct BronzeUBMInterfaceRec *ubmInterface; struct BronzeMtlStatistics *statsMgr; struct BronzeMtlSpotTracer *pSpotTracer; struct BronzeCmdBufInfoRec *pCmdBufInfo; struct AMDBitVectorRec *knownExpandedVec; struct BronzeDeviceMembersRec *deviceMembers; MTLIOAccelResource *scratchBuffer; struct BronzeResourceBindInfoRec { MTLIOAccelResource *rsrc; unsigned int index; unsigned int usageFlags; } currentResources[11]; unsigned char inSegment : 1; unsigned char viBasedHw : 1; unsigned char untrackedRsrcUsed : 1; unsigned char currentChannel : 3; unsigned char usedChannelsMask : 8; unsigned char counterSampling : 3; unsigned short reserved : 15; void *apiLayerData; unsigned long long rgpEventType; unsigned long long cmdBufGlblTraceObjID; struct __IOAccelDevice *amdMtlDeviceRef; struct vector<std::pair<MTLIOAccelResource *, unsigned char>, std::allocator<std::pair<MTLIOAccelResource *, unsigned char>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<MTLIOAccelResource *, unsigned char> *, std::allocator<std::pair<MTLIOAccelResource *, unsigned char>>> { void *__value_; } __end_cap_; } vectorMap; } m_members;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)synchronizeTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)copyFromBuffer:(id)a0 sourceOffset:(unsigned long long)a1 sourceBytesPerRow:(unsigned long long)a2 sourceBytesPerImage:(unsigned long long)a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toTexture:(id)a5 destinationSlice:(unsigned long long)a6 destinationLevel:(unsigned long long)a7 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8;
- (void)copyFromBuffer:(id)a0 sourceOffset:(unsigned long long)a1 sourceBytesPerRow:(unsigned long long)a2 sourceBytesPerImage:(unsigned long long)a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toTexture:(id)a5 destinationSlice:(unsigned long long)a6 destinationLevel:(unsigned long long)a7 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8 options:(unsigned long long)a9;
- (void)copyFromBuffer:(id)a0 sourceOffset:(unsigned long long)a1 toBuffer:(id)a2 destinationOffset:(unsigned long long)a3 size:(unsigned long long)a4;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toBuffer:(id)a5 destinationOffset:(unsigned long long)a6 destinationBytesPerRow:(unsigned long long)a7 destinationBytesPerImage:(unsigned long long)a8;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toBuffer:(id)a5 destinationOffset:(unsigned long long)a6 destinationBytesPerRow:(unsigned long long)a7 destinationBytesPerImage:(unsigned long long)a8 options:(unsigned long long)a9;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toTexture:(id)a5 destinationSlice:(unsigned long long)a6 destinationLevel:(unsigned long long)a7 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 toTexture:(id)a3 destinationSlice:(unsigned long long)a4 destinationLevel:(unsigned long long)a5 sliceCount:(unsigned long long)a6 levelCount:(unsigned long long)a7;
- (void)copyIndirectCommandBuffer:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destination:(id)a2 destinationIndex:(unsigned long long)a3;
- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)fillBuffer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 value:(unsigned char)a2;
- (void)generateMipmapsForTexture:(id)a0;
- (void)optimizeIndirectCommandBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)resetCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)resolveCounters:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationBuffer:(id)a2 destinationOffset:(unsigned long long)a3;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(char)a2;
- (void)synchronizeResource:(id)a0;
- (void)updateFence:(id)a0;
- (void)waitForFence:(id)a0;
- (id)initWithCommandBuffer:(id)a0;
- (void)dirtyTsQueryBuffer;
- (void)getTimestampAtOffset:(unsigned long long)a0;

@end
