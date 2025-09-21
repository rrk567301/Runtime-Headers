@class NSString;

@interface GFX9AMD_MtlIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout <NSObject> {
    struct AMD_IndirectArgumentBufferLayoutMembers { struct vector<AMD_IndirectArgumentBufferLayoutMembersRec, std::allocator<AMD_IndirectArgumentBufferLayoutMembersRec>> { struct AMD_IndirectArgumentBufferLayoutMembersRec *__begin_; struct AMD_IndirectArgumentBufferLayoutMembersRec *__end_; struct __compressed_pair<AMD_IndirectArgumentBufferLayoutMembersRec *, std::allocator<AMD_IndirectArgumentBufferLayoutMembersRec>> { struct AMD_IndirectArgumentBufferLayoutMembersRec *__value_; } __end_cap_; } layoutMap; } m_members;
}

@property (readonly) char bufferLayoutMatchesFrontEndLayout;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)a0;
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
- (void)buildLayoutfromStructType:(id)a0;

@end
