@interface AGXG14FamilyIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {
    struct unique_ptr<AGX::G14::IndirectArgumentLayout, std::default_delete<AGX::G14::IndirectArgumentLayout>> { struct __compressed_pair<AGX::G14::IndirectArgumentLayout *, std::default_delete<AGX::G14::IndirectArgumentLayout>> { struct IndirectArgumentLayout *__value_; } __ptr_; } _impl;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)alignment;
- (unsigned long long)encodedLength;
- (unsigned int)hashMask;
- (BOOL)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)a0;
- (unsigned int)hashOffset;
- (unsigned int)hashSignature;
- (unsigned int)hashValue;
- (id)initWithStructType:(id)a0;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForInstanceAccelerationStructureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForIntersectionFunctionTableAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForPrimitiveAccelerationStructureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForVisibleFunctionTableAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForAccelerationStructureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;

@end
