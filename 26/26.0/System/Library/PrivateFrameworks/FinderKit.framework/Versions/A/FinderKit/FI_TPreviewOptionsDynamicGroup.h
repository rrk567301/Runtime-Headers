@interface FI_TPreviewOptionsDynamicGroup : FI_TPreviewOptionsGroup {
    struct vector<TMetadataAttribute, std::allocator<TMetadataAttribute>> { struct TMetadataAttribute *__begin_; struct TMetadataAttribute *__end_; struct TMetadataAttribute *__cap_; } _dynamicAttributes;
}

@property (readonly, nonatomic) unsigned long long attributeCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)optionKeys;
- (void)addDynamicAttributes:(struct shared_ptr<TItemMetadata> { struct TItemMetadata *x0; struct __shared_weak_count *x1; })a0 removeAttributes:(id)a1;
- (void *)dynamicAttributes;

@end
