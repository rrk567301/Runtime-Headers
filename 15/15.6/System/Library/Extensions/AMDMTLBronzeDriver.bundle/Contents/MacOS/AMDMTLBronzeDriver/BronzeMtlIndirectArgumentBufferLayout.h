@class NSString;

@interface BronzeMtlIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout <NSObject> {
    struct BronzeIndirectArgumentBufferLayoutMembers { struct vector<BronzeIndirectArgumentBufferLayoutMembersRec, std::allocator<BronzeIndirectArgumentBufferLayoutMembersRec>> { struct BronzeIndirectArgumentBufferLayoutMembersRec *__begin_; struct BronzeIndirectArgumentBufferLayoutMembersRec *__end_; struct __compressed_pair<BronzeIndirectArgumentBufferLayoutMembersRec *, std::allocator<BronzeIndirectArgumentBufferLayoutMembersRec>> { struct BronzeIndirectArgumentBufferLayoutMembersRec *__value_; } __end_cap_; } layoutMap; } m_member;
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
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (void)buildLayoutfromStructType:(id)a0;

@end
