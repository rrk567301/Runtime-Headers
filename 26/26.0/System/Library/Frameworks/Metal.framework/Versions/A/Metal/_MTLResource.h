@interface _MTLResource : _MTLAllocation

@property (readonly) unsigned long long allocationID;
@property (readonly) long long compressionType;
@property (readonly, nonatomic) unsigned long long compressionFootprint;
@property (readonly, nonatomic) unsigned long long colorSpaceConversionMatrix;
@property (readonly, nonatomic) unsigned long long accelerationStructureUniqueIdentifier;
@property (readonly) long long sparseBufferTier;
@property (readonly) long long sparseTextureTier;
@property (readonly) unsigned long long bufferOffset;

- (id)init;
- (id)newTensorWithDescriptor:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)newTextureViewWithDescriptor:(id)a0;

@end
