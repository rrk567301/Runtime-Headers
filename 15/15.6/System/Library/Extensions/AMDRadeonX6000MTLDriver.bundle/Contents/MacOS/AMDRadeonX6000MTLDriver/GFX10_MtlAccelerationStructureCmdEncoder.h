@class NSString, GFX10_MtlDevice, MTLIOAccelResource, GFX10_MtlCmdBuffer;
@protocol MTLDevice;

@interface GFX10_MtlAccelerationStructureCmdEncoder : _MTLAccelerationStructureCommandEncoder <MTLAccelerationStructureCommandEncoderSPI> {
    struct GFX10_AccelerationStructureCmdEncoderMembersRec { GFX10_MtlCmdBuffer *cmdBuffer; struct AMD_HwCmdBufInfoRec *hwCmdBufInfo; GFX10_MtlDevice *device; struct GFX10SimpleComputeDispatcherRec *dispatcher; struct AMD_ResourceBindInfoRec { MTLIOAccelResource *rsrc; unsigned int index; unsigned int usageFlags; } currentResources[16]; unsigned char counterSampling : 3; unsigned int reserved : 29; struct AMD_MtlThreadTrace *pThreadTrace; void *apiLayerData; } _gfx10;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)serializeAccelerationStructure:(id)a0 toBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)buildAccelerationStructure:(id)a0 descriptor:(id)a1 scratchBuffer:(id)a2 scratchBufferOffset:(unsigned long long)a3;
- (void)copyAccelerationStructure:(id)a0 toAccelerationStructure:(id)a1;
- (void)copyAndCompactAccelerationStructure:(id)a0 toAccelerationStructure:(id)a1;
- (void)deserializeAccelerationStructure:(id)a0 fromBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)deserializeAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)deserializeInstanceAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)deserializePrimitiveAccelerationStructure:(id)a0 fromBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)endEncoding;
- (void)refitAccelerationStructure:(id)a0 descriptor:(id)a1 destination:(id)a2 scratchBuffer:(id)a3 scratchBufferOffset:(unsigned long long)a4;
- (void)refitAccelerationStructure:(id)a0 descriptor:(id)a1 destination:(id)a2 scratchBuffer:(id)a3 scratchBufferOffset:(unsigned long long)a4 options:(unsigned long long)a5;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(char)a2;
- (void)serializeInstanceAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 toBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)serializePrimitiveAccelerationStructure:(id)a0 toBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)updateFence:(id)a0;
- (void)useHeap:(id)a0;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)waitForFence:(id)a0;
- (void)writeAccelerationStructureTraversalDepth:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2;
- (void)writeCompactedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2;
- (void)writeCompactedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2 sizeDataType:(unsigned long long)a3;
- (void)writeDeserializedAccelerationStructureSize:(id)a0 serializedOffset:(unsigned long long)a1 toBuffer:(id)a2 sizeBufferOffset:(unsigned long long)a3;
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)a0 serializedOffset:(unsigned long long)a1 toBuffer:(id)a2 sizesBufferOffset:(unsigned long long)a3;
- (char)writeGenericBVHStructureOfAccelerationStructure:(id)a0 into:(id)a1;
- (char)writeGenericBVHStructureSizesOfAccelerationStructure:(id)a0 into:(id)a1;
- (void)writeGenericBVHStructureSizesOfAccelerationStructure:(id)a0 toBuffer:(id)a1 sizesBufferOffset:(unsigned long long)a2;
- (void)writeSerializedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 sizeBufferOffset:(unsigned long long)a2;
- (id)initWithCommandBuffer:(id)a0;

@end
